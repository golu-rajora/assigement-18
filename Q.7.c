//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrome_string(char a[]);
int main()
{
  char a[20];
  printf("a function to check whether a given string is palindrome or not:-\n");
  printf("enter a string:-");
  gets(a);
  palindrome_string(a);
  getch();
  return 0;
}
 void palindrome_string(char a[])
 {
     int x=strlen(a)-1;
     int c=0;
     for(int i=0;i<x/2;i++)
     {
         if(a[i]==a[x-i])
            c++;
     }
     if(c==x/2)
        printf("is palindrome");
     else
        printf("not palindrome");

 }

