#include <stdio.h>

int main(void)
{
    char my_name[100];

    printf("What's your name?\n");
    scanf("%99s", my_name);

    printf("Hello, %s\n", my_name);

    return 0;
}
