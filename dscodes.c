#include <stdlib.h>
#include <stdio.h>

struct student {
    int id;
    // ask the lecturer => how do we optimize this memory?
    char names[20];
    float marks;
};

/* for malloc() entering that once */

int main () {
    struct student *ptr;
    ptr = (struct student*) malloc(sizeof(struct student));
    free(ptr);

    /* to typecast the malloc because it always return void ptr; */

    ptr -> id = 12;
    ptr -> names[20] = "John";
    ptr -> marks = 20;

    printf("testing!!");

    return 0;
}
