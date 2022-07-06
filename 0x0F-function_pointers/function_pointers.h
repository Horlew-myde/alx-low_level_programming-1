#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * File: function_pointers.h
 * Auth: King CEO
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-function_pointers directory.
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
