#ifndef include
#define include

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <stdio.h>

typedef struct node
{
    char *key;
    char *string_name;
    struct node *next;
} node_t;

node_t *ft_parse_dictionary();
void convert_and_print(char *number, node_t *head);
char *get_digit_name(node_t *head, char *digit_name, int count);
void get_and_print_zeros(node_t *head, int n);
int strcmp(const char *s1, const char *s2);

#endif