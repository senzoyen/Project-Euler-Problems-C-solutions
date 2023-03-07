#include <stdio.h>

int main() {
    int i = 1;
    int res = 0;
    
    while(i < 1000)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            res += i;
        }
        i++;
    }
    printf("%d\n",res);
}
//gün 1