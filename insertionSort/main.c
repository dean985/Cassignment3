#include <stdio.h>
#include "isort.h"

#ifndef LEN
#define LEN 10
#endif

int main(){

    int arr[LEN];

    for( int i = 0 ;i< LEN; i++){
        scanf("%d ", &(*(arr+i)));
    }
    

    insertion_sort(arr, LEN);

    for (int i = 0; i < LEN; i++)
    {
        if (i == LEN-1){
            printf("%d",*(arr+i));
        }
        else printf("%d,",*(arr+i));
    }
    




    return 0;
}
