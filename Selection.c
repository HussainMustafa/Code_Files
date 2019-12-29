#include <stdio.h>

int main(){
    int arr[]= {1,3,5,2,6,7};
    int i;
    int n = sizeof(arr)/4;
    int min;
    int j;
    printf("%d",n);
    for (i=0;i<n;i++){
        min = arr[i];
        for (j=i+1; j<(n-i);j++){
            if (min > arr[j]){
                min = arr[j];
            }
        }
        printf("%d",min);
    }
    
    
    
    return 0;
}
