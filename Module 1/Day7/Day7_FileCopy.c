#include <stdio.h>

int main() {
  FILE *sourceFile, *targetFile;
  char ch;

 
  sourceFile = fopen("source.txt", "r");
  if (sourceFile == NULL) {
    printf("Unable to Open source file.\n");
    return 1;
  }

   targetFile = fopen("target.txt", "w");
  if (targetFile == NULL) {
    printf("Unable to Create target file.\n");
    fclose(sourceFile);
    return 1;
  }


  while ((ch = fgetc(sourceFile)) != EOF) {
    fputc(ch, targetFile);
  }

  printf("File Successfully Copied.\n");


  fclose(sourceFile);
  fclose(targetFile);

  return 0;
}