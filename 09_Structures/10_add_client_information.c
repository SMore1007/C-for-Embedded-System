#include<stdio.h>
#include<string.h>

typedef struct 
{
    int no;
    char name[20];
    char city[20];
    char state[20];
    int pin;
}clientInfoType_t;


int main()
{
    int numberOfClient = 0;
    printf("Enter the number of clients: ");
    scanf("%d", &numberOfClient);

    clientInfoType_t Clients[numberOfClient];

    printf("\nEnter Client Information\n");
    printf("*********************************\n");

    for (int i = 0; i < numberOfClient; i++)
    {
        printf("-----------------------\n");
        printf("Current Client Number  %d\n", i);
        printf("Enter Client Number: ");
        scanf("%d", &Clients[i].no);
       
        printf("\nEnter Client Name: ");
        scanf("%s", &Clients[i].name);

        printf("\nEnter Client City : ");
        scanf("%s", &Clients[i].city);

        printf("Enter Clinet State : ");
        scanf("%s", &Clients[i].state);

        printf("\nEnter Client Pin Code: ");
        scanf("%d", &Clients[i].pin);
    }
    
    printf("\n\n***************************************\n");
    printf("Client Information as per following \n");

    for (int i = 0; i < numberOfClient; i++)
    {

        printf("Client Numer:         %d\n", Clients[i].no);
        printf("Client Name:          %s\n", Clients[i].name);
        printf("Client City:          %s\n", Clients[i].city);
        printf("Client State:         %s\n", Clients[i].state);
        printf("Pin Code:             %d\n", Clients[i].pin);
        printf("-------------------------------------------\n");
    }
    return 0;
}