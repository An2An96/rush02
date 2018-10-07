#include "main.h"
#include <stdio.h>

int main()
{
    int width;
    int height;
    ft_get_rush_size("o--o\n|  |\n|  |\no--o\n", &width, &height);
    printf("width: %d, height: %d", width, height);
    return (0);
}