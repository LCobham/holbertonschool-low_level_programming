#ifndef BITWISE_H
#define BITWISE_H

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int find_most_significant_bit(unsigned long int N);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
