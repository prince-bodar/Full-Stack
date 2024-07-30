/*

  function  -> spaific task perform
  
        Argument   return
      1   no        no
      2	  no        with
	  3   with      no
	  4   with      with
	  
*/

// with argument with return 

#include<stdio.h>
  
  int product(int a,int b)
  {
    printf("product a*b is : %d ",a*b);
  }
  
  int main()
  {
     int a,b,m;
	 printf("enter the value of a : b =");
	 scanf("%d%d",&a,&b);
	 product(a,b);
	 // m=product(a,b);
	 //printf("product of a and b is : = %d",m);
	 //printf("product of a and b is : = %d",product(a,b));
	 
  }