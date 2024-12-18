#include<stdio.h>
int main(){
    int n = 1;
    int count = 12;
    int num;
    printf("Enter number");
    scanf("%d", &num);
    do
    {
        printf("&dx%d\n", num, n, n * 2);
        n++;
    } while (n <= count);
    return 0;
}