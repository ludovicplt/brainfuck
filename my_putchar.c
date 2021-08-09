/*
** EPITECH PROJECT, 2021
** brainfuk
** File description:
** make a brainfuck interperter
*/

#include <stdlib.h>
#include <unistd.h>

int my_putchar(char c)
{
    return (write(1, &c, 1));
}
