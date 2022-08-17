#include<stdio.h>
int main()
{
   int i,j,arr[20],n,temp;
   printf(" enter the size of array ");
   scanf("%d",&n);
   printf("Enter array element :- ");
   for(i=0;i<n;i++)
       scanf("%d",&arr[i]);

    printf(" Array element are :- ");
     for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    printf("After sort the array are :- ") ;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
   getch();
   return 0;
}


