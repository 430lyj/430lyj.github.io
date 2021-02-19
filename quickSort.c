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

void quickSort (int start, int end){
    if(start >= end){
        return;
    }
    int key = start; int i = start + 1; int j = end; 
    int tmp;
    while(i <= j){
        while(i <= end && a[i] <= a[key]) i++;
        while(j >= start && a[j] >= a[key]) j--;
        if(i > j) swap(&a[key], &a[j]);
        else swap(&a[i], &a[j]);
        quickSort(start, j - 1);
        quickSort(a[j+1], end);
    }
}

int main(void){
    int n, min, index;
    printf("How many elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%i", &a[i]);
    }
    quickSort(0, n-1);

    for (int l = 0; l < n ; l++){
        printf("%i", a[l]);
    }
}
