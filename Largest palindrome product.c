#include <stdio.h>
#include <string.h>

int is_palindromic(int num) {
    
	char num_str[12];
	
	sprintf(num_str, "%d", num);

	int last_index = strlen(num_str) - 1;
    int i = last_index;
	while (i >= 0){
		if (num_str[i] != num_str[last_index - i]) {
			return 0;
		}
		i--;
	}
	return 1;
}

int main()
{
    int numb1 = 999;
    int x,y;
    int totalNumber;
    int largestPalindrome = 0;
    
    
    while(numb1 >= 100)
    {
        int numb2 = 999;
        while(numb2 >= 100)
        {
            totalNumber = numb1 * numb2;
            if (is_palindromic(totalNumber) && totalNumber > largestPalindrome) {
				largestPalindrome = totalNumber;
				x = numb1;
				y= numb2;
			}
            numb2--;
        }
        numb1--;
    }
    printf("%d\n", x);
	printf("%d\n", y);
    printf("%d\n", largestPalindrome);
    return 0;
}