#include<stdio.h>

int main ()
  {
    int days,weeks,months,years;
	printf("enter days\n");
	scanf("%d",&days);
	
	years= (days/365);
	months= (days/12);
	weeks= (days%365)/7;
	days= days-((years*365)+(months*12)+(weeks*7));
	
	printf("%d \ndays",days);
	printf("%d \nweek",weeks);
	printf("%d \nmonth",months);
	printf("%d \nyear",years);
  
  return 0 ;
  }