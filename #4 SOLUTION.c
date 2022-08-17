#include<stdio.h>
int main()
{
    int arr[10],i,sum_even=0,sum_odd=0;
    printf(" Enter array element \n");
    for(i=0;i<10;i++)
    {
        printf(" enter element at index %d : ",i);
        scanf("%d",&arr[i]);

    }
    int large;
    large=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>large)
            large=arr[i];
    }
   printf(" ***********-----*************\n");
   printf(" LARGEST ELEMENT IN ARRAY = %d ",large);
   getch();
   return 0;
}
