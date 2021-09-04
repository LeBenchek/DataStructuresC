#include <stdlib.h>
#include <stdio.h>

int tb[Size] = { 77,60,12,21,41,7,10, 58, 88, 141, 4, 2 };

void raw(int compteur) {
    int i;
    for (i = 0; i < compteur - 1; i++) {
        printf("=");
    }
    printf("=\n");
}

void remplace() {
    int i;
    printf("{");
    for (i = 0; i <Size; i++) {
        printf("%d ", tb[i]);
    }

    printf("}\n");
}

void insertionSort() {
    int ValuePlus;
    int position;
    int i;
    for (i = 1; i < Size; i++) {
        ValuePlus = tb[i];
        position = i;
        while (position > 0 && tb[position - 1] ) {
            tb[position] = tb[position - 1];
            position--;
        }
        if (position != i) {
            tb[position] = ValuePlus;
        }

        printf("Iteration %d#:", i);
        remplace();
    }
}

void main() {
    printf("Insertion sort algorithm\n");
    raw(50);
    printf("The first array : ");
    remplacerTb();
    raw(50);
    insertionSort();
    printf("The array sorted : ");
    remplace();
    raw(50);
}
