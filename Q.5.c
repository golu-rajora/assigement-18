//5. Write a function to transform string into lowercase
#include<stdio.h>
void lowercase(char a[]);
int main()
{
    char a[20];
    printf("a function to transform string into lowercase:-\n");
    printf("enter a name in uppercase:-");
    gets(a);
    printf("transform in lowercase:-");
    lowercase(a);
    getch();
    return 0;
}
void lowercase(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==32)
            printf(" ");
        else
       {

        a[i]=a[i]+32;
        printf("%c",a[i]);
       }
    }
}
