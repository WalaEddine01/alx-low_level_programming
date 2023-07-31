#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int mul, num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }
    if (argv[1] == NULL || argv[2] == NULL)
    {
        printf("Error\n");
        exit(98);
    }
    if (argv[1][0] == '-' || argv[2][0] == '-')
    {
        printf("Error\n");
        exit(98);
    }
    while (*argv[1] != '\0')
    {
        if (*argv[1] < '0' || *argv[1] > '9')
        {
            printf("Error\n");
            exit(98);
        }
        argv[1]++;
    }
    while (*argv[2] != '\0')
    {
        if (*argv[2] < '0' || *argv[2] > '9')
        {
            printf("Error\n");
            exit(98);
        }
        argv[2]++;
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    mul = num1 * num2;
    printf("%d\n", mul);
    return (0);
}