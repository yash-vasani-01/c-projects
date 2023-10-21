#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < 2 * n; i++)
    {
        int j = 1;
        int k = 1;
        if (i <= n)
        {
            if (i != n){
                do {
                    printf("  ");
                    ++j;
                } while (j <= n-i);
            }

            do {
                printf(" *");
                ++k;
            } while (k <= 2*i-1);
            
        }
        else
        {

            do{
                printf("  ");
                ++j;
            } while (j <= i - n);

            do {
                printf(" *");
                ++k;
            } while (k <= 2*(2*n-i)-1);
        
        }
        printf("\n");
    }
    return 0;
}
