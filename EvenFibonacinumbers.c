/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 1;
    int nextnum = n1 + n2;
    int sumEv = 0;
    
    while(nextnum < 4000000)
    {
        
        n1 = n2;
        n2 = nextnum;
        if(nextnum % 2 == 0)
        {
            sumEv += nextnum;
        }
        nextnum = n1 + n2;
    }
    
    printf("%d", sumEv);
    return 0;
}
