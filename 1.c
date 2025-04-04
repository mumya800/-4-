#include<stdio.h>

int main() {
    char fruits[6][20] = {"яблоко", "банан", "апельсин", "груша", "персик", "абрикос"};
    int size = sizeof(fruits) / sizeof(fruits[0]);
    
    printf("Размер массива фруктов: %d\n", size);
    printf("Фрукты в массиве:\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }
}
