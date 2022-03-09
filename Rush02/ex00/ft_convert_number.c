#include "include.h"

void print_single_digit(int count, char *n, node_t *head)
{
    while (head != NULL)
    {
        if (strcmp(head->key, n) == 0)
        {
            break;
        }
        head = head->next;
    }
    printf("%s", head->string_name);
}

void print_two_digits(int count, char *n, node_t *head)
{
    while (head != NULL)
    {
        if (strcmp(head->key, n) == 0)
        {
            break;
        }
        head = head->next;
    }
    printf("%s", head->string_name);
}

void get_number_and_print(int start, int count, char *n, node_t *head)
{
    char *str = malloc(sizeof(char) * count);
    if (count == 1)
    {
        str[0] = n[0];
        print_single_digit(count, str, head);
    }
    else if (count == 2)
    {
        //print_two_digits(count, n, head);
    }
    else if (count == 3)
    {
        //print_three_digits(count, n);
    }
}

void convert_and_print(char *n, node_t *head)
{
    char *number;
    int length;
    int first_digit_count;

    length = 0;
    while (n[length] != '\0')
    {
        length++;
    }
    number = malloc(sizeof(char) * 120);
    first_digit_count = length % 3;
    get_number_and_print(0,first_digit_count, n, head);
    get_and_print_zeros(head, length-first_digit_count);
    //first_digit_count = 3;
    //while (n[first_digit_count] != '\0')
   // {
        //get_number_and_print(3, n, head);
        //get_and_print_zeros(head, length - first_digit_count);
        //first_digit_count += 3;
    //}
}
