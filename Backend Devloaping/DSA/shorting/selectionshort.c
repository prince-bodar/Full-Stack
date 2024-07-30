#include<stdio.h>

void printarray(int* A,int n)
{
      for(int i=0;i<n;i++)
      {
        printf("[%d]",A[i]);
      }
      printf("\n");
}   
void selectionSort(int *A, int n){
    int index, temp;
    printf("selction short is runing...\n");
    for (int i = 0; i < n-1; i++)
    {
        index = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[index]){
                index = j;
            }
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
    }
}

int main(){
    int A[]={12,3,6,43,24,22},n=6;
    printarray(A,n);//before sorting
    selectionSort (A,n);//sorting  program
    printarray(A,n);//sorting

}