#include "my_string.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    string_t str = {0};

    string_constructor(&str);
    str.New(&str, "HELLo");
    str.Show(&str);
    str.Destroy(&str);
    return 0;
}