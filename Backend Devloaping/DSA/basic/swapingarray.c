#include<stdio.h>
int main()
{
    int arr[]={3,4,5,6,7},size = 5;
    int roted = arr[size-1];
    for(int i=size;i>4;i--)
    {
        arr[4]=arr[size-5],
        arr[0]=roted;
        arr[i]= arr[i-1];
    }
   for(int i=0;i<size;i++)
   {
       printf("[%d]",arr[i]);
   }
}