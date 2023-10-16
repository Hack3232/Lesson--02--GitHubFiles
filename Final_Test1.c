#include<stdio.h>
#include<stdlib.h>

//  Singly Linked List with EE number, Name, Grade from 1 to 5

void display();

struct Node {
    int data;
    struct Node* next;
};

int main()
{
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(first);
    
    return 0;
}
void display(struct Node* ptr)
{
    printf("Employee numbers are:");
    while (ptr != NULL){

    printf(" %d ", ptr->data);
    ptr = ptr->next;
    }
}
