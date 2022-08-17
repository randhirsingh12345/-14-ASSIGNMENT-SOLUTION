#include<stdio.h>
int main()
{
    int arr2[100],n,i,arr1[100];
    printf(" enter size of array : ");
    scanf("%d",&n);
    printf("enter array element ");
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
     for(i=0;i<n;i++)
        arr2[i]=arr1[i];
      for(i=0;i<n;i++)
        printf("%d ",arr2[i]);
      getch();


}
