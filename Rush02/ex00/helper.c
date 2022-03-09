#include "include.h"

int strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *get_digit_name(node_t *head, char *digit_name, int  count)
{
    while (head != NULL)
    {
        if (strcmp(head->key, digit_name) == 0)
        {
            return head->string_name;
        }
        head = head->next;
    }
    return "NN";
}

void get_and_print_zeros(node_t *head, int n)
{
    int i;
    char *number = malloc(sizeof(char) * (n + 1));
    number[0] = '1';
    i = 1;
    while (i <= n)
    {
        number[i] = '0';
        i++;
    }
    printf("%s", number);
    get_digit_name(head, number,i);
}