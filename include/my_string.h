/*
** EPITECH PROJECT, 2021
** class_implementing
** File description:
** string
*/

#ifndef STRING_H_
#define STRING_H_

    #include "my_string.h"

    typedef struct string_h {
        char *str;
        void (*New)(struct string_h *, char *);
        int  (*Length)(struct string_h *);
        void (*Show)(struct string_h *);
        void (*Destroy)(struct string_h *);
        void (*toConcat)(struct string_h *, char *__to_cat);
    }string_t;

    void Create_string(string_t *this);
    int get_str_size(string_t *this);
#endif /* !STRING_H_ */