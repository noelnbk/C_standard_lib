#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main(){
  
  int counter = 0;
  char source[SIZE], copy[SIZE];
  char c;

  FILE *fs, *fc;

  printf("Enter the name of the source file you want to copy : ");
  scanf("%s", source);

  printf("Enter the name of the file you want to copy to : ");
  scanf("%s", copy);

  fs = fopen(source,"r");
  fc = fopen(copy,"w");

  if (fs == NULL)
  {
    printf("Couldn't open the source file.");
    return 1;
  }
  
  if (fc == NULL)
  {
    printf("Couldn't open the destination file.");
    return 2;
  }

  c = getc(fs);
  while(c != EOF)
  {
    fprintf(fc,"%c",c);
    c = getc(fs);
    counter ++;
  }

  printf("%d characters were copied.\n", counter);

  fclose(fs);
  fclose(fc);

  return 0;
}
