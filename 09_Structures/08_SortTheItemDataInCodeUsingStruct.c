#include<stdio.h>

typedef struct 
{
    int code;
    char subTopicDefinition[20];
    int qty;
}ItemTypde_t;

int main()
{
    ItemTypde_t it[10], t;
    int n;
    printf("How Many Items: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Item %d\n", i + 1);
        printf("code, Name, Quantity\n");
        scanf(" %d%s%d", &it[i].code, &it[i].subTopicDefinition, &it[i].qty);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (it[i].code > it[j].code)
            {
                t = it[i];
                it[i] = it[j];
                it[j] = t;
            }
        }
    }
    
    printf("After sorting on code\n");

    printf("Code\tName\tQuantity\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d\t%s\t%d\n", it[i].code, it[i].subTopicDefinition, it[i].qty);
    }
    return 0;
}
