#ifndef MAIN_H
#define MAIN_H
int set_bit(unsigned long int *n, unsigned int );
int clear_bit(unsigned long int *n, unsigned int);
unsigned int flip_bits(unsigned long int , unsigned long int );
int get_endianness(void);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int );
#endif
