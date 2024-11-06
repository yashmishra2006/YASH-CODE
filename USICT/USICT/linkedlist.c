#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int x;
    struct node *next;
} node;

node *createnode(int x) {
    node *new = malloc(sizeof(node));
    if (new) {
        new->x = x;
        new->next = NULL;
    }
    return new;
}

int insertf(node **x, int v) {
    node *y = createnode(v);
    if (!y) return 0;
    y->next = *x;
    *x = y;
    return 1;
}

int insertl(node **x, int v) {
    node *y = createnode(v);
    if (!y) return 0;
    if (!*x) {
        *x = y;
        return 1;
    }
    node *p = *x;
    while (p->next) p = p->next;
    p->next = y;
    return 1;
}

void printlist(node *h) {
    node *p = h;
    while (p) {
        printf("%d -> ", p->x);
        p = p->next;
    }
    printf("NULL\n");
}

void take_input(node **h) {
    int choice, value;
    printf("Enter values to add to the list. Choose 1 to insert at the beginning or 2 to insert at the end.\n");
    printf("Enter -1 to stop.\n");
    while (1) {
        printf("Enter choice (1 for beginning, 2 for end, -1 to stop): ");
        scanf("%d", &choice);
        if (choice == -1) break;
        
        printf("Enter value to insert: ");
        scanf("%d", &value);
        
        if (choice == 1) {
            insertf(h, value);
        } else if (choice == 2) {
            insertl(h, value);
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
}

int main(void) {
    node *h = NULL;
    
    take_input(&h);
    printf("Linked list contents:\n");
    printlist(h);

    return 0;
}
