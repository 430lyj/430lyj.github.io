#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%i", &a[i]);
    }

    for (int i = 0; i < n; i++){
        int j = i;
        while(j >= 0 && a[j] > a[j+1] && j < n - 1){
            swap(&a[j], &a[j+1]);
            j--;
        }
    }

    for (int l = 0; l < n ; l++){
        printf("%i", a[l]);
    }
}
