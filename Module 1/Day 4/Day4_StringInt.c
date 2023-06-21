#include <stdio.h>
#include <string.h>

int main() {
  char num[50];
  int  i, len;
  int result = 0;
  
  printf("Enter the number string: ");
  gets(num);
  len = strlen(num);

	for(i=0; i<len; i++){
		result = result * 10 + ( num[i] - '0' );     
	}

	printf("%d", result);
  return 0;
}



