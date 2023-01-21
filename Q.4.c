//4. Write a function to transform string into uppercase
#include<stdio.h>
void uppercase(char a[]);
int main()
{
    char a[20];
    printf("a function to transform string into uppercase:-\n");
    printf("enter a name in lowercase:-");
    gets(a);
    printf("transform in uppercase:-");
    uppercase(a);
    getch();
    return 0;
}
void uppercase(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]-32;
        printf("%c",a[i]);
    }
}
