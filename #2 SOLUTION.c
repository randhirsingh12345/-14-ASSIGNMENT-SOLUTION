#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,sum=0;
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    printf("sum of array element = %d \n",sum);
    float avg;
    avg=sum/10;
    printf("Average of array element = %f ",avg);
    getch();
    return 0;
}

