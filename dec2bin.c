#include <stdio.h>

int main() {
    char num;
    
    // Prasa lietotajam ievadit naturalu skaitli
    printf("Ievadi naturalu skaitli no 0 lidz 127: ");
    scanf("%hhd", &num);
    
    // Sagatavo un izprinte binaro skaitli izmantojot bitu parbidi
    printf("Skaitlis binaraja koda: ");
    for (int i = 7; i >= 0; i--) {
        // Izpilda parbidi pa labi un izmanto bitu parbidi "AND", lai bits atrostos pozicija i
        char bit = (num >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    return 0;
}

