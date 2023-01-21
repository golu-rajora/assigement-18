//2. Write a function to reverse a string
#include<stdio.h>
#include<string.h>
void string_reverse(char a[]);
int main()
{
    char a[20];
    printf("a function to reverse a string:-\n");
    printf("enter a name:-");
    gets(a);
    printf("reverse name is:-");
    string_reverse(a);
    getch();
    return 0;
}
   void string_reverse(char a[])
   {
       for(int i=strlen(a);i>=0;i--)
          printf("%c",a[i]);

   }
