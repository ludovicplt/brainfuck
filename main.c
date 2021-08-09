/*
** EPITECH PROJECT, 2021
** my_brainfuck
** File description:
** make an brainfuck interpreter
*/

#include <my_brainfuck.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;
    char *str = calloc(sizeof(char), 1000);
    FILE *stream;

    if (ac != 2) {
        printf("bad input\n");
        return (84);
    }
    stream = fopen(av[1], "r");
    if (stream == NULL) {
        printf("can't open file\n");
        return (84);
    }
    fread(str, sizeof(char), 1000, stream);
    if (str == NULL) {
        printf("can't read file\n");
        return (84);
    }
    unsigned char *memory = calloc(sizeof(unsigned char), 255);
    while (str[i] != '\0') {
        if (str[i] == '>') {
            memory++;
        }
        if (str[i] == '<') {
            memory--;
        }
        if (str[i] == '+') {
            ++(*memory);
        }
        if (str[i] == '-') {
            --(*memory);
        }
        if (str[i] == '.') {
            my_putchar(*memory);
        }
        i++;
    }
    return (1);
}
