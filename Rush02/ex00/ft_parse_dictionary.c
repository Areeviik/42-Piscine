#include "include.h"

char *get_key(int fd)
{
    int i = 0;
    char c[1];
    char *str;

    i = 0;
    str = malloc(sizeof(char) * 128);
    read(fd, c, 1);
    while (c[0] == '\n')
    {
        read(fd, c, 1);
    }
    while (c[0] >= '0' && c[0] <= '9')
    {
        str[i] = c[0];
        read(fd, c, 1);
        i++;
    }
    return (str);
}

char *get_string_name(int fd, char *first)
{
    int i;
    char current[1];
    char *str;

    i = 1;
    str = malloc(sizeof(char) * 128);
    str[0] = first[0];
    while (current[0] != '\n')
    {
        read(fd, current, 1);
        str[i++] = current[0];
    }
    return (str);
}

node_t *create_node()
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->next = NULL;
    node->key = NULL;
    node->string_name = NULL;
    return (node);
}

node_t *ft_parse_dictionary(char *filename)
{
    int fd;
    int i;
    node_t *head = create_node();
    node_t *current = head;
    char c[1];

    i = 0;
    fd = open(filename, O_RDONLY);
    /*
    if (fd == -1)
    {
        return NULL;
    }
    */
    while (i < 32)
    {
        current->key = get_key(fd);
        read(fd, c, 1);
        while (c[0] == ' ')
            read(fd, c, 1);
        if (c[0] == ':')
        {
            read(fd, c, 1);
        }
        while (c[0] == ' ')
            read(fd, c, 1);
        current->string_name = get_string_name(fd, c);
        current->next = create_node();
        current = current->next;
        i++;
    }
    close(fd);
    return head;
}
