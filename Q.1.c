//1. Write a function to calculate length of the string
#include<stdio.h>
int string_length(char a[]);
int main()
{
    char a[20];
    int b;
    printf("a function to calculate length of the string:-\n");
    printf("enter a name:-");
    gets(a);
    b=string_length(a);
    printf("the name length is=%d",b);
    getch();
    return 0;
}
   int string_length(char a[])
   {
       int count=0;
       for(int i=0;a[i]!='\0';i++)
        count++;
           return count;

   }
