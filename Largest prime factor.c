/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 2;
    long num = 600851475143;
     while(num > 1)
     {
         while(num % i == 0)
         {
             num = num/i;
             
         }
         i++;
     }

    printf("%d", i);
    return 0;
}
