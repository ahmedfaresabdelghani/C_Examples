#include <stdio.h>
#include<math.h>

int main()
{

    int res=0,i=0,number,num1,num2,temp=0;
    scanf("%d",&number);
    num1=number;
    num2=number;
    while(num1!=0)
    {
        num1=num1/10;
        i++;
    }
    while (number!=0)
    {
        temp=number%10;
        res=res+pow(temp,i);
        number=number/10;
    }
    if(res==num2){
    printf("the number is Armstrong");
    }
    else
    {
    printf("the number is not Armstrong");

    }

}