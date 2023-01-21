//8. Write a function to count words in a given string
#include<stdio.h>
int count_words(char a[]);
int main()
{
    char a[20];
    printf("a function to count words in a given string:-\n");
    printf("enter a string:-");
    gets(a);
    int b=count_words(a);
    printf("this string in %d word",b);
    getch();
    return 0;
}
int count_words(char a[])
{
    int count=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==32)
            count++;
    }
    return count;
}
