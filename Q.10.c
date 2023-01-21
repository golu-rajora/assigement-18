//10. Write a function to find the repeated character in a given string
#include<stdio.h>
void repeated_character(char a[],int b[]);
int main()
{
    char a[20];
    int b[200]={0};
    printf("a function to find the repeated character in a given string:-\n");
    printf("enter a string:-");
    gets(a);
    repeated_character(a,b);
    getch();
    return 0;
}
void repeated_character(char a[],int b[])
{
    for(int i=0;a[i]!='\0';i++)
        b[a[i]]++;

    for(int i=0;b[i]<122;i++)
    {
        if(b[i]>0)
            printf(" %c---%d\n",i,b[i]);
    }
}

