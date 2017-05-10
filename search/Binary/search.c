#include <stdio.h>
#include <stdlib.h>

void printArr(int * arr);
void readArr(int * arr, int N);

int main(int argc, const char * argv[]) {
    int N, M;
    int arr[100000];
    scanf("%d %d", &N, &M);
    readArr(arr, N);
printArr(arr);
    return EXIT_SUCCESS;
}

void printArr(int arr[]) {
    int i = 0;
    while(arr[i] != '\0') {
        printf("Element at position %d is %d\n", i+1, arr[i]);
        i++;
    }
}

void readArr(int arr[], int N) {
    int i;
    for(i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
}
