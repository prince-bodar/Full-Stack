#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40];  
 
   printf ("enter the character  for string => ");  

     //  scanf ("%[^\n]s", str);  
     gets(str); 
	 
	 printf (" \n After the reverse of a string: %s" ,str);  
     //puts(str);
	
	printf("\n");
	int i;
	
	for(i=0;str[i]!='\0';i++);
	
	printf("your string length is : %d",i);
	
	return 0;  
}  