/*

  function  -> spaific task perform
  
        Argument   return
      1   no        no
      2	  no        with
	  3   with      no
	  4   with      with
	  
*/

// with argument no return 

#include<stdio.h>

  int largeno(int x,int y)
  {
     printf("the large number is %d",x>y?x:y);
  }
  
  int main()
  {
       int x,y;
	   printf("enter the value of x =");
	   scanf("%d",&x);
	   printf("enter the value of y =");
	   scanf("%d",&y);
	   largeno(x,y);
  }
  