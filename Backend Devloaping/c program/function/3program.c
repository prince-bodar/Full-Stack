#include <stdio.h>

int reverseno() 
{

  int n, i = 0, j;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    j = n % 10;
    i = i * 10 + j;
    n /= 10;
  }

  printf("you number is reversed = %d", i);
}

int countcurruncy()
{
	int amt,total,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
	
	printf("eneter the your amount = ");
	scanf("%d",&amt);
	
	printf("your total amount is = %d",amt);
	if(amt>=500)
	 {
	    a=amt/500;
        amt=amt%500;		
	 }
	 
	 if(amt>=200)
	 {
	    b=amt/200;
        amt=amt%200;		
	 }
	
	if(amt>=100)
	 {
	    c=amt/100;
        amt=amt%100;		
	 }
	
	if(amt>=50)
	 {
	    d=amt/50;
        amt=amt%50;		
	 }
	
	
	if(amt>=20)
	 {
	    e=amt/20;
        amt=amt%20;		
	 }
	 
	 
	if(amt>=10)
	 {
	    f=amt/10;
        amt=amt%10;		
	 }
	 
	 
	if(amt>=5)
	 {
	    g=amt/5;
        amt=amt%5;		
	 }
	 
	 
	if(amt>=2)
	 {
	    h=amt/2;
        amt=amt%2;		
	 }
	 
	 	 
	if(amt>=1)
	 {
	    i=amt/1;
        amt=amt%1;		
	 }
	 
	printf("\nyour 500 note number = %d",a);
	printf("\nyour 200 note number = %d",b);
	printf("\nyour 100 note number = %d",c);
	printf("\nyour 50 note number = %d",d);
	printf("\nyour 20 note number = %d",e);
	printf("\nyour 10 note number = %d",f);
	printf("\nyour 5 note number = %d",g);
	printf("\nyour 2 note number = %d",h);
	printf("\nyour 1 note number = %d",i);
}

int main()
{
	reverseno();
	printf("\n");
	countcurruncy();
}