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

     for(i=0;i<10;i++)
     {
         if(arr[i]/2*2==arr[i])
            sum_even=sum_even+arr[i];
         if(arr[i]%2!=0)
            sum_odd=sum_odd+arr[i];
     }
     printf(" SOM OF ALL EVEN NUMBER = %d\n",sum_even);
     printf(" SOM OF ALL ODD NUMBER = %d",sum_odd);
    getch();
    return 0;
}

