#include <stdio.h>
#include <stdlib.h>

void readArr(int * arr, int arrLen);
void printArr(int * arr);

int main(int argc, const char * argv[]) {
    int N, M;
    int arr[100000];
    scanf("%d %d", &N, &M);
    readArr(arr, N);
    printArr(arr);
    return EXIT_SUCCESS;
}


void readArr(int * arr, int arrLen) {
    int i;
    for(i=0; i<arrLen; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArr(int * arr) {
    int i = 0;
    while(arr[i] != '\0') {
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    }
}
