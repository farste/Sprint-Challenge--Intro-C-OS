
#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv[])
{
  char *needle = NULL;
  struct dirent *de;
  if (argc > 1) {
  needle = argv[1];
  }
  else {
  needle = "./";
  }
  
  DIR *dir = opendir(needle);

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