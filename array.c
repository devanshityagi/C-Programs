#include <stdio.h>
int main() {
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: \n");
    for (int j=0; j<n; j++){
        printf("%d\n", arr[j]);
    }
}