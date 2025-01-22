/*
** EPITECH PROJECT, 2024
** my_str_isalpha.c
** File description:
** ..
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 97 || str[i] > 122 || str[i] > 90 || str[i] < 65) {
            return 0;
        }
        i++;
    }
    return 1;
}
