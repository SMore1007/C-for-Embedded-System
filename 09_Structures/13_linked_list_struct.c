/*
malloc() == which aalocate the memory, not give the initialization
   syntax: 
          malloc
calloc() == contigus allocation, allocate the memory incontigua maner and assign vaue to zero init
realloc() == 

free  == to clear the memory created by malloc()

*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;    
}*head, *old, *p, *n;


int main()
{
    int m;
    int i,j,k,l;

    printf("Enter the nodes: ");
    scanf("%d", &m);
    // Create the memory space
    head  = (struct Node*) malloc(sizeof(struct Node)); // node 1 sapce
    n = (struct Node*) malloc(sizeof (struct Node)); // node 2 space
    head->data = 10; // node 1 data
    n->data = 20; // node 2 data

    // Linking the nodes
    head->next = NULL;
    old = head; // making copy of head node

    // creating, assigning and linking the nodes
    for (int i = 0; i < m; i++)
    {
        n = (struct Node*) malloc(sizeof(struct Node));
        printf("Enter data\n");
        scanf("%d", &n->data);
        n->next = NULL;
        old->next = n;  // link to n to old
        old = n; // push old to next
    }
    // print the nodes

    p = head; 
    while (p != NULL)
    {
        printf("%d, ", p->data);
        p = p->next;
    }
    


    
}