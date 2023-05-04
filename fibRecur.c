#include <stdio.h>
// program to implement fibonacci series using tail recursion
int fib(int n, int a, int b)
{
    if (n == 0)
    {
        return a;
    }
    if (n == 1)
    {
        return b;
    }
    return fib(n - 1, b, a + b);
}
void main()
{
    int n;
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d, ", fib(i, 0, 1));
    }
}