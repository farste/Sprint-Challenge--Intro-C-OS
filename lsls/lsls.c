#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv[])
{
  struct dirent *de;
  DIR *dir = opendir("./");

    if (dir == NULL) {
      printf("Directory not found");
      return 0;
    }
    while ((de = readdir(dir)) != NULL) {
      printf("%s\n", de->d_name);
    }

    closedir(dir);

  // Parse command line

  // Open directory
  // Repeatly read and print entries

  // Close directory

  return 0;
}