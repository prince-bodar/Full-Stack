/*

  function  -> spaific task perform
  
        Argument   return
      1   no        no
      2	  no        with
	  3   with      no
	  4   with      with
	  
*/

// No Argument With Return 

 #include<stdio.h>

  int addition()    //function define 
  {
    int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	return a+b;
  }  
  
  int  product()     //function define
  {
	int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
    return a-b;
  }
  
  int main()
  {
	  printf("Hello \n");
	  int x = addition();	  //function call
	  printf("the addition is : %d",x);
	  printf("\n hiii...\n");
	  int y = product();                 //function call
      printf("the product is : %d",y);
  }