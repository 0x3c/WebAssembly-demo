#include <stdio.h>

int sum(int, int);

int main()
{
    printf("hello WebAssembly\n");

    int x, y;

    printf("input x:\n");
    scanf("%d", &x);
    printf("\n input y:\n");
    scanf("%d", &y);
    int z = sum(x, y);

    printf("%d + %d = %d\n", x, y, z);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}