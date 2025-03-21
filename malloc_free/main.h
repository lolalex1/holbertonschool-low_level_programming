#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif
