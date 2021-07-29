#include <unistd.h>

void ft_rev_int_tab(int *tab, int size){
    const int center_idx = ((size - 1) / 2) + 1;
    int tmp;

    for (int i=0; i < center_idx; i++){
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
    }
}