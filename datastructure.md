# DATA STRUCTURE

## DATA IS CLASSIFIED INTO TWO CATEGORIES
- Primitive
- Non Prmitive

### PRIMITIVE
Data structure that affects the system directly, less expensive.
ex: int, char, float,...

### NON PRMITIVE
Data structure that do not affect the system directly, usually expensive
because it requires a lot of memory
for instance: _int_ [4 bits at most] whereas _array_ [at least 4 bits]

#### LINEAR 
- Arrays... in 2D, 3D, 4D,...
- Linked lists: linking nodes on a network [in temrs of data and it's link]
- Stacks [where data is not top of the other] 
- Queue [first to come, first to be served]

#### NON-LINEAR
- Tree [binary tree]
- Graphs [special types of trees]

# ALGORITHMS

## Dynamic Memory Allocation
All about how data is allocated in the memry system.
DMA allocating the meory at runtime(execution) when the program is already running.

using pointers to allocate data

example int *ptr = new int


### Keywords
- malloc()  => aallocate size of a byte
- calloc() => allocate space for an array
- realloc() => reallocate/change the size
- free() => 

struct student {
    int id;
    char names*; // to make it lengthless
    float marks;
}

### for malloc() entering that once

int main () {
    struct student *ptr;
    ptr = (struct student*) malloc(sizeof(struct student));  
    <!-- to typecast the malloc because it always return void *ptr; -->

    ptr -> id = 12;
    ptr -> names = "John";
    ptr -> marks = 20;

    return 0;
}

### for calloc() entering that once

int main () {
    struct student *ptr;
    ptr = (struct student*) calloc(sizeof(n, struct student));  
    <!-- to typecast the malloc because it always return void *ptr; -->
    <!-- where n is the number of input at once, because calloc accepts data in bundles  -->

    ptr -> id = 12;
    ptr -> names = "John";
    ptr -> marks = 20;

    return 0;
}

### for realloc() entering that once

int main () {
    struct student *ptr;
    ptr = (struct student*) malloc(sizeof(struct student));  
    <!-- to typecast the malloc because it always return void *ptr; -->
    <!-- realloc to change the size -->
    <!-- saying reallocate from ptr, make 5 values and then this is the one that will be the new pointer -->
    <!-- also remember that reallocating is done once allocating happens when allocating had already happened -->
    ptr1 = (struct student*) realloc(sizeof(ptr, 5, struct student));  

    ptr -> id = 12;
    ptr -> names = "John";
    ptr -> marks = 20;

    return 0;
}

### other remarks
- should always use <stdlib.h> because it is where we can find our malloc packages

## Linked Lists
Set of nodes(a data type that holds at least two parts i.e _data_ part and _link_ part) linked to one another. Either in a _singular, double or circular_ form.

### Singular linked list
This is when the node is only point to one item in from if it. This makes the first element the _head_ and the last element the _last_

[] -> [] -> [] -> ||

### Double linked list
This is when the node is point to both the node before it and the node after it.

|| <-> [ || ] <-> [ || ] <-> [ || ] <-> ||

### Circular (Ring Buffer) linked list
this is more of a circular way to point each data to the other. 
NOte that you should always keep track of the first (_head_) element.

## Design Patterns

## Hashing

## Time Complexity

## Searching

## Sorting