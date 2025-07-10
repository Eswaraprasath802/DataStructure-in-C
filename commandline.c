#include<stdio.h>
void main(int argc,char *argv[])
{
    printf("The total number of elements:%d",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    
}