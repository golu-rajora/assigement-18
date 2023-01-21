//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
int alphanumeric_string(char a[]);
int main()
{
    char a[20];
    printf("a function to check whether a given string is an alphanumeric string or not:-\n");
    printf("enter a string:-");
    gets(a);
    int b=alphanumeric_string(a);
    if(b)
        printf("that string is Alphanumeric string ");
    else
        printf("that string is not Alphanumeric string ");
    getch();
    return 0;
}
 int alphanumeric_string(char a[])
 {
     int alphabet=0,digit=0;
     for(int i=0;a[i]!='\0';i++)
     {
         if(a[i]>64||a[i]>122)
            alphabet++;
            else if(a[i]>47||a[i]>58)
            digit++;
     }
     if(digit>=1&&alphabet>=1)
        return 1;
     else
        return 0;
 }

