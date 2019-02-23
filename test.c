#include<stdio.h>
#include <string.h>
int main()
{
   char input[5];

   scanf("%s", input);

   if(strlen(input) == 3 && !strncmp(input, "IOI", 3))
   {
      printf("IOI is the International Olympiad in Informatics.");
   }
   else
   {
      printf("I don't care.");
   }
   return 0;
}