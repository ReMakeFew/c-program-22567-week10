#include <stdio.h>
int main()
{
    int n = 1;
    int sum = 0;
    int num;
    printf("Enter number");
    scanf("%d", &num);
    while (n <= 12)
    {
        printf("2x%d=%d\n", num, n, n * 2);
        sum = sum + n;
        n++; 
    }
    printf("Sum = %d", sum);
    return 0;
}