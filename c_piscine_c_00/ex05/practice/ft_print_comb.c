#include <unistd.h>


const char g_numbers[11] = "0123456789";

void ft_print_comb(void){
    int i = 0;
    int j;
    int k;
    char st[3];
    const char comma = ',';

    for (i; i < 10; i++){
        
        j = i+1;

        for (j; j < 10; j++){
            k = j + 1;

            for (k; k < 10; k++) {
                    st[0] = g_numbers[i];
                    st[1] = g_numbers[j];
                    st[2] = g_numbers[k];
                    
                    write(1, &st[0],1);
                    write(1, &st[1],1);
                    write(1, &st[2],1);
                    write(1, &comma,1);
                }
        }


    }
}