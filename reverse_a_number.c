#include <stdio.h>
int main()
{
    int number,reverse=0;
    scanf("%d",&number);
    while(number!=0)
    {
        reverse=(reverse*10)+(number%10);
        number=number/10;
    }
    printf("\n number after reversing = %d\n",reverse);
}