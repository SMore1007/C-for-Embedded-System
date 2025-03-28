#include<stdio.h>
void retunrMid(int arr[], int size, int *mid){
    *mid  = (arr[size/2]);
}
int main(){
    int arr[] = {1,2,4,2,54,6,4,3,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int mid = 0;
    retunrMid(arr, len, &mid);
    printf("Mid value of array is: %d", mid);
    return 0;
}