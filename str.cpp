#include <stdio.h>
#include <string.h>
int main()
{
	char mystring[50];
	int len,i;
	printf("Enter a string: ");
   	scanf("%s", mystring);
            len = strlen(mystring);
	for(i=len-1; i>=0; i--)
	{
             printf("%c", mystring[i]);	
	}
    return 0;
}
