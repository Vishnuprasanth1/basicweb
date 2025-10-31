#include <stdio.h>
#include <string.h>
#include <dirent.h>  // For directory operations

int main() {
    char path[100];
    struct dirent *entry;
    DIR *dir;
    int count = 0;

    // Ask user for the directory path
    printf("Enter directory path: ");
    scanf("%s", path);

    // Open the directory
    dir = opendir(path);
    if (dir == NULL) {
        printf("Could not open directory %s\n", path);
        return 1;
    }

    // Read files in the directory
    while ((entry = readdir(dir)) != NULL) {
        // Check if file name ends with .jpg or .JPG
        if (strstr(entry->d_name, ".jpg") != NULL || strstr(entry->d_name, ".JPG") != NULL) {
            count++;
            printf("%s\n", entry->d_name);  // Optional: print file names
        }
    }

    closedir(dir);

    printf("\nTotal JPG files: %d\n", count);

    return 0;
}

