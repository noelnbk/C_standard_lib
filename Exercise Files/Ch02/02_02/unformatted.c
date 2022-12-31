#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main(){
  
  char str[SIZE];

  printf("Enter any string : ");
  scanf("%[^\n]s", str);
  
  printf("The string you entered : %s\n", str);

  return 0;
}

