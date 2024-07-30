/*

  function  -> spaific task perform
  
        Argument   return
      1   no        no
      2	  no        with
	  3   with      no
	  4   with      with
	  
*/

// no argument no return 

 #include<stdio.h>

  void addition()    //function define 
  {
    int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	printf("final total is : %d",a+b);
  }  
  
  void product()     //function define
  {
	int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	printf("final total is : %d",a*b);
  }
  
  int main()
  {
	  printf("Hello \n");
	  addition();                //function call
	  printf("\n hiii...\n");
	  product();                 //function call
  }
  
  














	







	