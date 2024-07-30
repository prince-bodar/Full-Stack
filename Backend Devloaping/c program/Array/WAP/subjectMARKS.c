#include<stdio.h>                 
 int main()
 
 {
   int s1[4],s2[4],s3[4],per[3],i;
      for(i=0;i<=2;i++)
	  {
	     printf("enter the marks maths=");
		 scanf("%d",&s1[i]);
		 
		 printf("enter the marks cs=");
		 scanf("%d",&s2[i]);
		 
		 printf("enter the marks cf=");
		 scanf("%d",&s3[i]);
	  } 
      for(i=0;i<1;i++)
      {
	    per[0] =((s1[0]+s2[0]+s3[0])*100)/300;
		printf(" student number 1 = %d\n",per[0]);
		
		per[1] =((s1[1]+s2[1]+s3[1])*100)/300;
		printf(" student number 2 =%d\n",per[1]);
		
	    per[2] =((s1[2]+s2[2]+s3[2])*100)/300;
		printf(" student number 3 = %d\n",per[2]);
	  }	  
	return 0;
 }