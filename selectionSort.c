#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define SIZE 1000

int a[SIZE];

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void){
    int n, min, index;
    printf("How many elements: ");
    scanf("%i", &n);
    for(int i = 0; i < n ; i++){
        scanf("%i", &a[i]);
    }

    min = a[0];
    for (int j = 0; j < n; j++){
        for(int k = j; k < n; k++){
            if(min > a[k]){
                min = a[k];
                index = k;
            }
        }
        swap(&a[index], &a[j]);
    }
    for(int l = 0; l < n; l++){
        printf("%i ", a[l]);
    }
}
