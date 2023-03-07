/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int  i, ans;
    ans = 1;

    for (i = 1; i <= 10; i++) 
    {
        ans = lcm(ans, i);
    }
    printf("%d", ans);
    return 0;
}

// EBOB'u bulma
    int gcd(int a, int b)
    {
        int gcd = 1;
        int i;
        for (i = 1; i <= a && i <= b; ++i) 
        {
         if (a % i == 0 && b % i == 0) {
               gcd = i;
             }
        }
        return gcd;
    }
    
    // EKOK'u bulma
    int lcm(int a, int b)
    {
        int lcm;
        lcm = (a * b) / gcd(a,b);
        return lcm;
    }
    
    
    
    