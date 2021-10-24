#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

// Also, in the structure , should remember that the *next should point to the structure
// Head to let use know the head element

void insertAtBeginning (int value) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode -> data = value;
    if ( head == NULL ) {
        // assigning the current structure to being the first node
        head = last = newnode;
        // to assign the next empty structure
        newnode -> next = NULL;
    } else {
        newnode -> next = head;
        head = newnode;
    }

    printf("Inserted successfully!\n");

    // point the last to the node
}

void insertAtEnd (int value) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode -> data = value;

    // when the header is null at the beginning
    if ( head == NULL ){
        head = last = newnode;
        newnode -> next = NULL;
    } else {
        // to make the next node of the first node the new node
        last -> next = newnode;
        last = newnode;
        newnode -> next = NULL;
    }

    printf("Inserted successfully!\n");
}

void insertAtPosition ( int value ) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode -> data = value;

    // when the header is null at the beginning
    if ( head == NULL ){
        head = last = newnode;
        newnode -> next = NULL;
    } else {
        struct node *temp = head;
        int n = 0;
        printf("Which no. to follow: ");
        scanf("%d", &n);
        while(temp -> data != n) {
            temp = temp -> next;
        }
        struct node *temp1 = temp -> next;
        temp -> next = newnode;
        newnode -> next = temp1;
    }
    printf("Inserted successfully!\n");
}

void deleteBeginning () {
    struct node *temp = head;
    temp = temp -> next;
    head = temp;
    free(temp);

    printf("Deleted successfully!\n");
}

void deleteSpecific (int key) {
    struct node *temp = head;
    while ( temp -> next -> data != key ) {
        // so far temp is equals to the next node we want to replace
        temp = temp -> next;
    }

    // we point to the node after the one we want to delete
    struct node *temp1 = temp -> next -> next;
    // then we replace the node we want to delete by the next node
    temp = temp1;
    // and then we remove the the temp1 node which was temporal
    free(temp1);

    printf("Deleted successfully!\n");
}

void deleteEnd () {
    struct node *temp = head;
    struct node *temp1;

    while ( temp -> next != NULL ) {
        // so far temp is equals to the next node we want to replace
        temp1 = temp;
        temp = temp -> next;
    }

    last = temp1;
    free(temp);

    printf("Deleted successfully!\n");
}

void displaying () {
    struct node *temp;
    printf("\n");
    while( temp ) {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main () {
    int value, ch, wh = 1;


    while (wh == 1) {
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at spicific position\n4. Delete from beginning\n5. Delete at specific position\n6. Display\n0. Exit\n");
        scanf("%d", &ch);


    switch(ch) {
        case 1:
            printf("Enter value to enter:\n");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;
        case 2:
            printf("Enter value to enter:\n");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 3:
            printf("Enter value to enter:\n");
            scanf("%d", &value);
            insertAtPosition(value);
            break;
        case 4:
            deleteBeginning();
            break;
        case 5:
            printf("Enter position to delete from:\n");
            scanf("%d", &value);
            deleteSpecific(value);
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            displaying();
            break;
        default:
            ch = 0;
        }


    };



    return 0;
}
