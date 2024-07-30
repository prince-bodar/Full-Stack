#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("abc.text","w+");
    fprintf(fp,"you start study of c language......\n");
    fputs("your end of study of c language......\n",fp);
    fputs("welcome to my writing file ......\n",fp);
    
    fclose(fp);
}