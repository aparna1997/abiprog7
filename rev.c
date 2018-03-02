#include <stdio.h>
int main()
{
    int n, rev = 0, rem;
scanf("%d", &n);
 while(n != 0)
    {
        rem= n%10;
        rev = rev*10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", rev);
if(n<0)
{
printf("error");
}
    return 0;
}
