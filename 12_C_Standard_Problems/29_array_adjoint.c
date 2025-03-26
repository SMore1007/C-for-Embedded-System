// check if the two array are disjoints 
#include<stdio.h>
#include<stdbool.h>
int Is_disjoints(int a1[], int l1, int a2[], int l2 );

int main()
{
    int array1[] = {1,3,5,7,9};
    int array2[] = {2,4,6,8,10};
    int L1 = sizeof(array1) / sizeof(array1[0]);
    int L2 = sizeof(array2) / sizeof(array2[0]);
    int result = Is_disjoints(array1, L1, array2, L2);
    if(result){
        printf("these two array are unique\n");
    } else{
        printf("These array are not unique\n");
    }
    return 0;
}

int Is_disjoints(int a1[], int l1, int a2[], int l2 )
{
    int flag = 0;
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (a1[i] == a2[j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0){
        return 1;
    } else{
        return 0;
    } 
}