#include<stdio.h>
int main()
{
    int i;
    int count = 12;
    int num = 3;
    printf("Enter number: ");
    scanf("%d", &num);    
    for (int i = 1; i <= count; i++)
    {
        printf("%dx%d = %d\n", num, i, i * num);
    }
    return 0;
}