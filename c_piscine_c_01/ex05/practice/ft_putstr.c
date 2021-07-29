#include <unistd.h>

void ft_putstr(char *str){
    while (*str != NULL){
        write(1, str, 1);
        str++;
    }
}