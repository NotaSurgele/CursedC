/*
** EPITECH PROJECT, 2021
** class_implementing
** File description:
** method
*/

#include "my_string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
    this->str = strdup(strcat(this->str, __to_cat));
}

void Create_string(string_t *this)
{
    this->New = &init_str;
    this->Length = &get_str_size;
    this->Show = &print;
    this->Destroy = &Destroy;
    this->toConcat = &Cat;
}