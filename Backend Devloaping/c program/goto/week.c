#include<stdio.h>
int main()
{
    int n;
    printf("enter value under 1 to 7 = ");
    scanf("%d",&n);
    int dayno=n;
    switch(dayno)
    {
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

         case 7:
        printf("sunday");
        break;

        default:
        printf("this day is not available");
        
    }
}