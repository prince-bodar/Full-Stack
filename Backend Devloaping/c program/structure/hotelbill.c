#include<stdio.h>

struct hotelbill
{
    int billno;
    char csname[50];
    float totalbill;
}c1,c2,c3,c4;

int main()
{
   struct hotelbill c5;
 
   printf("enter the costumer bill no = ");
   scanf("%d%d%d%d%d",&c1.billno,&c2.billno,&c3.billno,&c4.billno,&c5.billno);

   printf("\nenter the costumer name = ");
   scanf("%s%s%s%s%s",&c1.csname,&c2.csname,&c3.csname,&c4.csname,&c5.csname);

   printf("\nenter the costumer total bill = ");
   scanf("%f%f%f%f%f",&c1.totalbill,&c2.totalbill,&c3.totalbill,&c4.totalbill,&c5.totalbill);
   
   printf("\n\ncostmer 1 information is ");
   printf("\nbill number is = %d",c1.billno);
   printf("\ncostmer name is = %s",c1.csname);
   float gst=0.05*c1.totalbill;
   printf("\ntotal bill is = %f and  gst is = %f ",c1.totalbill,gst);
   printf("totalbill  + gst =  %f",c1.totalbill+gst);

   printf("\n\ncostmer 2 information is ");
   printf("\nbill number is = %d",c2.billno);
   printf("\ncostmer name is = %s",c2.csname);
   float gst=0.05*c2.totalbill;
   printf("\ntotal bill is = %f and  gst is = %f ",c2.totalbill,gst);
   printf("totalbill  + gst =  %f",c2.totalbill+gst);
   
   printf("\n\ncostmer 3 information is ");
   printf("\nbill number is = %d",c3.billno);
   printf("\ncostmer name is = %s",c3.csname);
   float gst=0.05*c3.totalbill;
   printf("\ntotal bill is = %f and  gst is = %f ",c3.totalbill,gst);
   printf("totalbill  + gst =  %f",c3.totalbill+gst);

   printf("\n\ncostmer 4 information is ");
   printf("\nbill number is = %d",c4.billno);
   printf("\ncostmer name is = %s",c4.csname);
   float gst=0.05*c4.totalbill;
   printf("\ntotal bill is = %f and  gst is = %f ",c4.totalbill,gst);
   printf("totalbill  + gst =  %f",c4.totalbill+gst);
}