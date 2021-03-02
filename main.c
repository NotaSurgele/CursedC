#include "my_string.h"
#include <stdio.h>

int main(void)
{
    string_t str = {0};

    Create_string(&str);
    str.New(&str, "Hello");
    str.toConcat(&str, " World");
    str.Show(&str);
    str.Destroy(&str);
    return 0;
}
