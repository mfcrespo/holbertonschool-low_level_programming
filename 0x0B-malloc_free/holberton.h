#ifndef HOLBERTON_H
#define HOLBERTON_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int  _strlen(char *str);
char *_concat(char *concatenate, char *s1, char *s2);
char *writeconcat(char *concatstr, int ac, char **av);
int findlength(int ac, char **av);
#endif
