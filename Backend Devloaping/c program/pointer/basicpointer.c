#include<stdio.h>

int main()
{
    int mynum=10;
    
     printf("my num: %d\n", mynum);

     printf("my num pointer is : %p\n",&mynum);

     int* ptr=&mynum;
     printf("my num pointer is ptr : %p\n",ptr);
    
 return 0;
}