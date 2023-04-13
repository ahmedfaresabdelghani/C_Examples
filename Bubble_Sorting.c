#include<stdio.h>
/* implementation of Bubble sorting*/
int main()
{
   /* int arr[10]= {0};
    int i,temp;
    for(i=0; i<10; i++)
    {
        printf("please enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("numbers after sorting :\n");
    for(i=0; i<9; i++)
    {
        for(int z=0; z<(9-i); z++)
        {
            if(arr[z]>arr[z+1])
            {
                temp=arr[z+1];
                arr[z+1]=arr[z];
                arr[z]=temp;
            }

        }
    }

    for(int z=0; z<=9; z++)
    {
        printf("%d\n",arr[z]);
    }
*/
int arr[10],temp;
for (int i = 0; i < 10; i++)
{
printf("please enter the %d number:\n",i+1);
scanf("%d",&arr[i]);
}

for (int i = 0; i < 9; i++)
{

    for (int z = 0; z < 9-i ; z++)
    {
        if(arr[z]>arr[z+1])
        {
            temp=arr[z+1];
            arr[z+1]=arr[z];
            arr[z]=temp;
        }
    }
    

}


for (int i = 0; i <= 9; i++)
{
printf("array after sorting is%d\n",arr[i]);

}


}
