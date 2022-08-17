#include<stdio.h>
int main()
{
    int arr[20],i,n,largest=0,s_largest=0;
    printf(" enter the size of array : ");
    scanf("%d",&n);
    printf("enter array element ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    largest=arr[0];
     for(i=1;i<=n-1;i++)
     {
         if(arr[i]<largest)
         {
             s_largest=largest;
             largest=arr[i];

         }
         if(arr[i]<s_largest)
            s_largest=arr[i];

     }
     printf(" Second largest = %d ",s_largest);
     getch();

}

