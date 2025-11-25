#include <stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter number of terms:\n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int i, f1 = 0, f2 = 1, f3;
    printf("%d %d ", f1, f2);
    for(i=2;i<n;i++)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}

