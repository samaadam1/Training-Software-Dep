#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
   
    scanf("%d", &n);
    if(n>1000 || n<1)
    {
        printf("number invalid");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int)); 

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>1000 || arr[i]<1)
    {
        printf("number invalid");
        return 0;
    }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    free(arr); 

        
    return 0;
}

