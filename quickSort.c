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
    printf("How many elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%i", &a[i]);
    }
	
    //들어갈 숫자를 선택하는 루프
    for (int i = 0; i < n; i++){
        int j = i;
        //들어갈 위치를 선택하는 루프
        //j < n-1 조건을 통해서 a[n-1]과 a[n](데이터에 포함되지 않는 값)이 swap되는 것을 막아줌
        while(j >= 0 && a[j] > a[j+1] && j < n - 1){
            swap(&a[j], &a[j+1]);
            j--;
        }
    }

    for (int l = 0; l < n ; l++){
        printf("%i", a[l]);
    }
}
