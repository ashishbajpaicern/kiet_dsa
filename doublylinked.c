#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// defining structure of a node
typedef struct nodetype
{
    struct nodetype *prev;
    int info;
    struct nodetype *next;

} node;

void insertatbeginning(node **head, node **tail, int item)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->info = item;
    if (*head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        *head = ptr;
        *tail = ptr;
    }
    else
    {
        ptr->next = *head;
        ptr->prev = NULL;
        (*head)->prev = ptr;
        *head = ptr;
    }
}

void traverseinorder1(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->info);
        head = head->next;
    }
}

node *search(node *head, int item)
{
    if (head == NULL)
    {
        printf("list is empty");
        return NULL;
    }
    else
    {
        while (head != NULL)
        {
            if (head->info == item)
            {
                printf("element found");
                return head;
            }
            else if (item < head->info)
            {
                printf("element not found");
                return NULL;
            }
            else
                head = head->next;
        }
        return NULL;
    }
    printf("%d\n", head->info);
}

void main()
{
    node *head, *tail;
    int choice, element, after;
    head = NULL;
    tail = NULL;
    while (1)
    {
        printf("                  option available");
        printf("++++++++++++++++++++++++++++++++++++++ \n\n");
        printf("  1. insert at beginning\n");
        printf("   2. traverse\n");
        printf(" 3.peak element\nt");

        printf("  4. exit\n\n");
        printf("enter your choice(1-4)");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter element");
            scanf("%d", &element);
            insertatbeginning(&head, &tail, element);
            break;
        case 2:

            traverseinorder1(head);
            break;
        case 3:
            printf("\n enter element");
            scanf("%d", &element);
            node *a = search(head, element);
            break;

        case 4:
            exit(1);
        }
    }
} //