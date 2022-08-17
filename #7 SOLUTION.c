#include<stdio.h>
int main()
{
    int arr[20],n,i,largest;
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter array element ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    second_largest(arr,n);
    largest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Largest element %d \n",largest);
    getch();
    int res=large(arr,n);
    printf("Smallest element %d \n",res);
    sort(arr,n);
    return 0;
}
void second_largest(int arr[],int n)
{
    int i,s_largest=0,largest=0;
    largest=arr[0];
     for(i=1;i<n;i++)
     {
         if(arr[i]>largest)
         {
             s_largest=largest;
             largest=arr[i];

         }
         if(arr[i]>s_largest)
            s_largest=arr[i-1];

     }
     printf(" Second largest = %d \n",s_largest);
     getch();

}
void sort(int arr[],int n)
{
    int i,j,temp=0;
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
    printf("After sort the array are : ");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
       printf("\n");

    printf(" Second largest Element in array are %d \n",arr[n-2]);
    printf(" Second smallest Element in array are %d \n",arr[1]);
    getch();
}
int large(int arr[],int n)
{
    int i,large;
    large=arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]<large)
            large=arr[i];
    }
    return large;
}
