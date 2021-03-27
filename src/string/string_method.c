#include "my_string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void init_str(string_t *this, char *str)
{
    if (!this) return;
    if (this->str) free(this->str);
    this->str = NULL;
    this->str = strdup(str);
}

int get_str_size(string_t *this)
{
    if (!this->str) return -1;
    return strlen(this->str);
}

void print(string_t *this)
{
    if (!this->str) return;
    printf("%s\n", this->str);
}

void Destroy(string_t *this)
{
    free(this->str);
    this = NULL;
}

void Cat(string_t *this, char *__to_cat)
{
    if (!this->str || !__to_cat) return;
    this->str = realloc(this->str, (strlen(this->str) + strlen(__to_cat) + 1));
    this->str = strcat(this->str, __to_cat);
}

bool isUpper(string_t *this)
{
    if (!this->str) return false;

    for (int each = 0; this->str[each] != '\0'; each++) {
        if (this->str[each] < 'A' || this->str[each] > 'Z')
            return false;
    }
    return true;
}

bool isLower(string_t *this)
{
    if (!this->str) return false;

    for (int each = 0; this->str[each] != '\0'; each++) {
        if (this->str[each] < 'a' || this->str[each] > 'z')
            return false;
    }
    return true;
}

bool isPrintable(string_t *this)
{
    if (!this->str) return false;

    for (int each = 0; this->str[each]; each++) {
        if (this->str[each] < 27 || this->str[each] > 126)
            return false;
    }
    return true;
}

bool isNum(string_t *this)
{
    if (!this->str) return false;

    for (int each = 0; this->str[each]; each++) {
        if (this->str[each] < '0' || this->str[each] > '9')
            return false;
    }
    return true;
}

void string_constructor(string_t *this)
{
    this->str = NULL;
    this->New = &init_str;
    this->Length = &get_str_size;
    this->Show = &print;
    this->Destroy = &Destroy;
    this->toConcat = &Cat;
    this->isUpper = &isUpper;
    this->isLower = &isLower;
    this->isPrintable = &isPrintable;
    this->isNum = &isNum;
}