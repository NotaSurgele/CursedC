/*
** EPITECH PROJECT, 2021
** class_implementing
** File description:
** main
*/

#include "my_string.h"
#include <stdio.h>

int main(void)
{
    string_t str = {0};

    Create_string(&str);
    str.New(&str, "hello");
    str.Show(&str);
    str.Destroy(&str);
    return 0;
}
