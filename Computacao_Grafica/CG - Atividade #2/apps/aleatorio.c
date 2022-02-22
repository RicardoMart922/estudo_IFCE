#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", rand() % 10);
    }
    getch();
    system("pause");
    return 0;
}