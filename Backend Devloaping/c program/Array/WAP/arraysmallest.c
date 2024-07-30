#include<stdio.h>
  int main()
{
  int i,a[2];
    for(i=0;i<=1;i++)
	{
	  printf("Enter the value =");
	  scanf("%d",&a[i]);
	}
	 if(a[0]<a[1])
	 {
	   printf(" a[0] is smallest");
	 }else
	 {
	   printf(" a[1] is smallest");
	 }
  return 0;
}