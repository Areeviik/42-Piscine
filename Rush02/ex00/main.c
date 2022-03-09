#include "include.h"

int main(int argc, char **argv)
{
    node_t *head = ft_parse_dictionary(argv[2]);
    if (head == NULL)
    {
        write(1, "Error\n", 6);
        return 0;
    }
    convert_and_print(argv[1],head);

    //while (head != NULL)
    //{
    //printf("%s --- %s\n", head->key, head->string_name);
    //head = head->next;
    //}
    //write(1, &head->val, 1);
    //write(1, &head->string_name[0], 1);
    return 0;
}