/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    int nkare;
    int ntoplam;
    int ntoplamkare;
    int res;
    while(n <= 100)
    {
        nkare += (n*n);
        ntoplam += n;
        n++;
        
    }
    ntoplamkare += (ntoplam*ntoplam);
    res = ntoplamkare - nkare;
    printf("%d", res);


    //printf("%d,%d", nkare, ntoplamkare);

    return 0;
}
