#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    scanf("%d\n", &n);
    int numarray[n];
    int *arr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i){
        scanf("%d", &numarray[i]);
    }
    arr = numarray;
    for (int i = 0; i < n; ++i){
        sum = sum + *arr ;
        arr++ ;
    }
    printf("%d", sum);
}
