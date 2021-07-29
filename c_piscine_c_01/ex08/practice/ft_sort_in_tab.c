void swap(int *tab, int idx_1, int idx_2){
    int temp;

    temp = tab[idx_1];
    tab[idx_1] = tab[idx_2];
    tab[idx_2] = temp;
}

void ft_sort_int_tab(int *tab, int size){
    int i = 1;
    int j;

    for (i; i < size; i++){
        for (j=i; j > 0; j--){
            if (tab[j] < tab[j - 1]){
                swap(tab, j, j-1);
            }
            else {
                break;
            }
        }
    }
}