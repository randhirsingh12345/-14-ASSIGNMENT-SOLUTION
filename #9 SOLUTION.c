
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
    printf("Array element are in reverse order : ");
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    getch();
    sec();
    return 0;
}
void sec()
{
    int arr[5],i;
    printf(" enter array element ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=4;i>=0;i--)
        printf("%d ",arr[i]);
    getch();
}
