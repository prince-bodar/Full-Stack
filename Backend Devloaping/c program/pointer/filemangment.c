#include<stdio.h>
int main()
// reading mode
{
    FILE *fp;
    char buffer[500];

    fp=fopen("E:/test1.txt","r");

    while(fscanf(fp,"%s",buffer)!=EOF)
    {
        printf("%s",buffer);
    }

    fclose(fp);

    return 0;

}