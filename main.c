#include "my_string.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    string_t str = {0};

    string_constructor(&str);
    str.New(&str, "0123a56");
    printf("%d", str.isNum(&str));
    str.Destroy(&str);
    return 0;
}