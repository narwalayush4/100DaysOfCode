# Day 7: January 29, 2024

# Arrays (9.2), Character Arrays (10), Pointers(11), Stack & heap (12)

### Q1 - 2D Matrix Search
- rows and columns are sorted in ascending order

## Character Arrays
```c++
char arr[n+1];
// last character is \0 so size is n+1, not n
cin >> arr; 
// input rahul then arr = rahul
cout << arr; // rahul
```
### Q2 largest word in a line
- cin.getline()

## Pointers
- variables that store address of other variable
```c++
int a = 10; // stored at address 2000
// int* data type of pointer
int *aptr;
// &a gives address of a
aptr = &a;  

cout << &a ; // address of a - 2000
cout << aptr; // 2000 

cout << *aptr; // deferencing == a. == 10

*aptr = 20;
cout << a; a = 20


aptr++;
cout << aptr; // 2004 (4 bytes is size of int)


char ch = 'a';
char *cptr = &ch;
cout << cptr ; // 3000
cptr++;
cout << cptr; // 3001 (char ka size is 1 byte)
```


### Pointers & Arrays
```c++
int arr[] = {10, 20, 30};
cout << *arr << endl; // deferencing - arr stores address of int 10 in array (first element)

int *ptr = arr;
for(int i = 0, i < 3, i++){
    cout << ptr << endl; // 10 20 30 is printed; coz ptr now stores address of zeroth element
    ptr++;
}
for(int i = 0, i < 3, i++){
    // arr+i moves pointer to next element
    cout << *(arr+i) << endl; // arr + 1 is done & not + 4; coz arr is indexing pointer; it goes to next index not memory location
    
    // illegal; cant change this address like a normal pointer
    arr++; 
}
```

### Pointer to Pointer
```c++ 
int a = 10;
int *p = &a; // 2000

int **q = &p;
cout << *q << endl; // 2000
cout << **q << endl; // 10
```

### Passing Pointers in function
```c++
void increment(int a){
    a++;
}
int a = 1;
increment(a); // passed by value
cout << a; // 1


void increment(int *ptr){
    *ptr++;
}
int a = 1;
int *ptr = &a
increment(a); // passed by reference
cout << a; // 2
```

## Stacks & Heaps
### Stack
- Size s fixed
- can overflow
- system must know how much memory is to be allocated at compile time
- cant change memory during runtime, if variables in stack
- local variables, can only access in scope

### Heap
- size is not fized, can be expanded 
- dynamic memory allocation
- we can allocate and de-allocate memory manually to variables
- size must not be known during run time
```c++
int a = 10; // stored in stack
int *p = new int(); // allocate memory in heap // p is stored in stack(p = 2000); the variable whose pointer is p is in heap
*p = 10; 
delete(p); // deallocate memory
// variable deleted, but p is still there
// p is now called a dangling pointer
// can reallocate or remove from stack
p = new int[4]; // memory allocation for array // no need to re initialise p 
delete[] p; // deletes the complete block of memory allocated to array
p = NULL; 
```



