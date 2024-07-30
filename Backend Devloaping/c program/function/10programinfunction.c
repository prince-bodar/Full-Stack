#include<stdio.h>
int pattern1()
{ 
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int pattern2()
{
	int i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
/*
int comparision()
 {
   int a,b,c;
   scanf("enter the value of a and b : %d %d\n",&a,&b);
   c = a>b;
   printf("%d",c);
   
 }*/
int oddnumber()
 {
  int i,n;
    printf("enter the value of n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		  printf("%d",i);
		}
	}
	
 }

int pattern3()
 {
 	int i,j,k=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c,\t",k++);
		}
		printf("\n");
	}

 }
int primeornot()
 {
	int a[10],i,j,count=0;
    
	for(i=0;i<10;i++)
	{
		printf("enter any value [%d] =",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		count=0;
		  for(j=2;j<a[i];j++)
		  {
			  if(a[i]%j==0)
			  {
				  count++;
			  }
		  }
		  if(count==0)
		  {
			  printf("%d is prime number \n",a[i]);
		  }else
		  {
			 printf("%d is not prime number \n",a[i]);
		  }	  
		  
		
	}
 }

  int count0and1()
    { 
       int a[10],b[10],c[10],i,temp0=0,temp1=0;
  
        for(i=0;i<10;i++)
	      {
	        printf("Enter the value 0 OR 1 = ");
	        scanf("%d",&a[i]);
	      }
	
        for(i=0;i<10;i++)
	      {	  
		    if(a[i]==0)
		     {
			 temp0+=1;
		     }
		      else
		     {
		       temp1+=1;	 
		     }
	   
	}	
	 
	for(i=0;i<temp0;i++)
	   {
		 b[i]=0;
		 printf("%d",b[i]);
	   }
	 
	 printf("\n");
	 
    for(i=0;i<temp1;i++)
	   {
		 c[i]=1;
		 printf("%d",c[i]);
	   }
 
}	

int main()
{
	printf("first functin is pattern=1\n");
	pattern1();
	
	printf("\nseconde functin is pattern=2\n");
	pattern2();
	
   // printf("\nthired pattern is comparision\n");
  //  comparision();
	
  	printf("\nfour functin is oddnumber\n");
	oddnumber();
	
	printf("\nfive functin is pattern=3\n");
	pattern3();
	
	printf("\nsix  functin is prime or not \n");
	primeornot();
	
	printf("\n seven function is count 0 and 1 \n");
	count0and1();
	
}
