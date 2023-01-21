//3. Write a function to compare two strings.
#include<stdio.h>
 void compare_string(char a[],char b[]);
int main()
{
   char a[20],b[20];
   printf("a function to compare two strings:-\n");
   printf("enter the two string:-");
   gets(a);
   gets(b);
   compare_string(a,b);
   getch();
   return 0;
}
 void compare_string(char a[],char b[])
 {
     int first=0,second=0;
     for(int i=0;a[i]!='\0';i++)
     {
         if(a[i]>b[i])
            first++;
         else
            second++;
     }
     if(first>second)
        printf("first string is big");
     else
        printf("second string is big");
 }
