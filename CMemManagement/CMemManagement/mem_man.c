#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5

//*** Helper functions.

void print_sect_end();
void nLine(int);


//*** Major project demonstration functions.

void demo_pointers_and_normal_variables();
void demo_pointer_size_comparison();
void demo_pointer_as_argument();
void demo_array_as_argument();
void demo_pointer_as_return();
void demo_pointer_arithmetic();
void demo_pointer_as_array();
void demo_array_as_pointer();
void demo_malloc();
void demo_calloc();
void demo_realloc();
void demo_deallocation();
void demo_data_struct();
void demo_pointer_to_pointer();
void demo_pointer_to_function();
void demo_flexible_array();


//*** Main function.

int main()
{
	printf("\nSSE 663 Project 1 - C Memory Management.");
	print_sect_end();
	demo_pointers_and_normal_variables();
	demo_pointer_size_comparison();
	demo_pointer_as_argument();
	demo_array_as_argument();
	demo_pointer_as_return();
	demo_pointer_arithmetic();
	demo_pointer_as_array();
	demo_array_as_pointer();
	demo_malloc();
	demo_calloc();
	demo_realloc();
	demo_deallocation();
	demo_data_struct();
	demo_pointer_to_pointer();
	demo_pointer_to_function();
	demo_flexible_array();

	system("pause");
	return 0;
}


//*** Demonstrating pointer and normal variable
//*** similarities and differences.

void demo_pointers_and_normal_variables()
{
	printf("Demonstrating pointer and normal variable similarities and differences.\n\n");
	int varA, *ptrA;
	varA = 10;
	ptrA = &varA;
	printf("varA:\t\t\t%d\n", varA);
	printf("varA reference:\t\t%p\n", &varA);
	printf("ptrA:\t\t\t%p\n", ptrA);
	printf("ptrA dereferenced:\t%d\n", *ptrA);

	int varB = 5;
	int *ptrB = &varB;
	printf("ptrB:\t\t\t%p\n", ptrB);
	printf("ptrB dereferenced:\t%d\n", *ptrB);
	printf("varB initial:\t\t%d\n", varB);

	*ptrB = varA;
	printf("varB reassigned:\t%d\n\n", varB);
	printf("ptrA: %p; ptrA dereferenced: %d\n", ptrA, *ptrA);
	printf("ptrB: %p; ptrB dereferenced: %d\n", ptrB, *ptrB);

	ptrB = ptrA;
	*ptrB = 15;
	printf("ptrA: %p; ptrA dereferenced: %d\n", ptrA, *ptrA);
	printf("ptrB: %p; ptrB dereferenced: %d\n", ptrB, *ptrB);
	printf("varA: %d; varB: %d\n\n", varA, varB);

	printf("varA dereferenced reference: %d", *&varA);
	print_sect_end();
}


//*** Demonstrating size comparison between different
//*** pointers and relating normal types.

void demo_pointer_size_comparison()
{
	printf("Demonstrating size comparison between different\npointers and relating normal types.\n\n");
	printf("Size of short: %d\n", sizeof(short));
	printf("Size of short pointer: %d\n", sizeof(short*));
	printf("Size of char: %d\n", sizeof(char));
	printf("Size of char pointer: %d\n", sizeof(char*));
	printf("Size of int: %d\n", sizeof(int));
	printf("Size of int pointer: %d\n", sizeof(int*));
	printf("Size of float: %d\n", sizeof(float));
	printf("Size of float pointer: %d\n", sizeof(float*));
	printf("Size of long: %d\n", sizeof(long));
	printf("Size of long pointer: %d\n", sizeof(long*));
	printf("Size of double: %d\n", sizeof(double));
	printf("Size of double pointer: %d\n", sizeof(double*));
	printf("Size of 2 member char array: %d\n", sizeof(char[2]));
	printf("Size of 2 member char array pointer: %d\n", sizeof(char*[2]));
	printf("Size of 2 member int array: %d\n", sizeof(int[2]));
	printf("Size of 2 member int array pointer: %d\n", sizeof(int*[2]));
	printf("Size of 2 member float array: %d\n", sizeof(float[2]));
	printf("Size of 2 member float array pointer: %d\n", sizeof(float*[2]));
	printf("Size of 2 member double array: %d\n", sizeof(double[2]));
	printf("Size of 2 member double array pointer: %d", sizeof(double*[2]));
	print_sect_end();
}


//*** Demonstrating the use of pointers as arguments
//*** for functions.

void normal_param_inc(int);
void pointer_param_inc(int *);

void demo_pointer_as_argument()
{
	printf("Demonstrating the use of pointers as arguments for functions.\n\n");
	int varA = 0, *ptrA = &varA;
	printf("varA initial: %d; varA initial ref: %p\n", varA, &varA);
	printf("ptrA initial: %p; ptrA initial deref: %d\n\n", ptrA, *ptrA);
	normal_param_inc(varA);
	normal_param_inc(*ptrA);
	printf("varA pbv: %d; varA pbv ref: %p\n", varA, &varA);
	printf("ptrA pbv: %p; ptrA pbv deref: %d\n\n", ptrA, *ptrA);
	pointer_param_inc(&varA);
	pointer_param_inc(ptrA);
	printf("varA pbr: %d; varA pbr ref: %p\n", varA, &varA);
	printf("ptrA pbr: %p; ptrA pbr deref: %d", ptrA, *ptrA);
	print_sect_end();
}

// Increments arg as passed by value.
void normal_param_inc(int varA)
{
	varA++;
}

// Increments arg passed by reference.
void pointer_param_inc(int *ptrA)
{
	(*ptrA)++;
}


//*** Demonstrating the use of arrays as arguments
//*** for functions.

void array_param(int[]);

void demo_array_as_argument()
{
	printf("Demonstrating the use of arrays as arguments for functions.\n\n");
	int a[2] = {0, 0};
	printf("Initial index 1 and 2 of a: %d and %d\n", a[0], a[1]);
	array_param(a);
	printf("After function call -\n");
	printf("a index 0: %d\n", a[0]);
	printf("a index 1: %d", a[1]);
	print_sect_end();
}

// Sets index 0 and 1 of arg to 10 and 20, respectively.
void array_param(int a[])
{
	a[0] = 10;
	a[1] = 20;
}


//*** Demonstrating functions that return a pointer,
//*** not a normal variable.

int *rtn_ptr(int*);

void demo_pointer_as_return()
{
	printf("Demonstrating functions that return a pointer, not a normal variable.\n\n");
	int var = 3;
	printf("Initial value of var: %d\n", var);
	int *ptr = rtn_ptr(&var);
	*ptr = 5;
	printf("New value of var: %d", var);
	print_sect_end();
}

// Returns the arg passed in.
int *rtn_ptr(int *var)
{
	return var;
}


//*** Demonstrating pointer arithmetic.

void demo_pointer_arithmetic()
{
	printf("Demonstrating pointer arithmetic.\n\n");
	int a[5] = { 0,1,2,3,4 }, *ptr1 = a;
	printf("Initial ptr1: %p\n", ptr1);
	printf("Initial ptr1 deref: %d\n", *ptr1);
	ptr1 += 4;
	int *ptr2 = ptr1 - 3;
	printf("New ptr1: %p\n", ptr1);
	printf("New ptr1 deref: %d\n", *ptr1);
	printf("ptr2: %p\n", ptr2);
	printf("ptr2 deref: %d", *ptr2);
	print_sect_end();
}


//*** Demonstrating the use of pointer variables
//*** as an array.

void demo_pointer_as_array()
{
	printf("Demonstrating the use of pointer variables as an array.\n\n");
	int a[SIZE] = { 0,1,2,3,4 }, *ptr;
	printf("Using ptr to navigate and modify array in reverse:");
	for (ptr = a + SIZE - 1; ptr >= a; ptr--) {
		(*ptr)++;
		printf(" %d", *ptr);
	}
	printf("\nArray after pointer modifications:");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", a[i]);
	printf("\nAccessing array index 3 by pointer: %d", *(ptr + 3));
	print_sect_end();
}


//*** Demonstrating the use of array names as
//*** pointers.

void demo_array_as_pointer()
{
	printf("Demonstrating the use of array names as pointers.\n\n");
	int a[SIZE];
	for (int i = 0; i < SIZE; i++) {
		*(a + i) = i;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("Array: %d; Ptr: %d\n", a[i], *((a + i)));
	}
	printf("Ptr: %p", a);
	print_sect_end();
}


//*** Demonstrating the use of the stdlib function
//*** malloc.

void demo_malloc()
{
	printf("Demonstrating the use of the stdlib function malloc.\n\n");
	char *ptr = malloc(sizeof(char) * SIZE + 1);
	if (ptr == NULL) return;
	for (int i = 0; i < SIZE ; i++)
		ptr[i] = 'a' + i;
	ptr[SIZE] = '\0';
	printf(ptr);
	free(ptr);
	print_sect_end();
}


//*** Demonstrating the use of the stdlib function
//*** calloc.

struct cart_vect {
	int xComp;
	int yComp;
	int zComp;
};

void print_cart_vect(struct cart_vect *);

void demo_calloc()
{
	printf("Demonstrating the use of the stdlib function calloc.\n\n");
	char *ptr1 = malloc(sizeof(char) * SIZE);
	char *ptr2 = calloc(SIZE * 2, sizeof(char));
	if (ptr1 == NULL || ptr2 == NULL) return;
	for (int i = 0; i < SIZE; i++) {
		ptr1[i] = 'a' + i;
		ptr2[i] = ptr1[i];
	}
	printf("ptr1 from malloc: ");
	printf(ptr1);
	printf("\nptr2 from calloc: ");
	printf(ptr2);
	struct cart_vect *cv1 = calloc(1, sizeof(struct cart_vect));
	if (cv1 == NULL) return;
	printf("\nAllocated cv1: ");
	print_cart_vect(cv1);
	free(ptr1); free(ptr2); free(cv1);
	print_sect_end();
}

// Prints the cartesian vector x, y, and z components.
void print_cart_vect(struct cart_vect *cv)
{
	printf("(%d,%d,%d)", cv->xComp, cv->yComp, cv->zComp);
}


//*** Demonstrating the use of the stdlib function
//*** realloc.

void demo_realloc()
{
	printf("Demonstrating the use of the stdlib function realloc.\n\n");
	char *ptr = calloc(SIZE * 2, sizeof(char));
	if (ptr == NULL) return;
	strcpy(ptr, "abcdefghi");
	printf(ptr); nLine(1);
	ptr = realloc(ptr, sizeof(char) * SIZE);
	if (ptr == NULL) return;
	printf(ptr);
	free(ptr);
	print_sect_end();
}


//*** Demonstrating the deallocation of memory in
//*** the C programming language.

void demo_deallocation()
{
	printf("Demonstrating the deallocation of memory in the C programming language.\n\n");
	char *ptr1 = calloc(SIZE, sizeof(char));
	char *ptr2 = calloc(SIZE, sizeof(char));
	if (ptr1 == NULL || ptr2 == NULL) return;
	printf("ptr1 initial: %p\n", ptr1);
	printf("ptr2 initial: %p\n", ptr2);
	free(ptr1);
	ptr2 = calloc(SIZE, sizeof(char));
	printf("ptr1 after free call: %p\n", ptr1);
	printf("ptr2 after free call: %p", ptr2);
	free(ptr2);
	print_sect_end();
}


//*** Demonstrating data structures with pointers.

#define NOT_FOUND -999

struct node {
	int val;
	struct node *prev;
	struct node *next;
};

void add_to_end(int);
void add_to_begin(int);
void delete_prev(struct node*);
void delete_next(struct node*);
void delete_this(struct node*);
struct node *find(int);
int get_val(struct node*);
void destroy_list();
void print_list();

// Pointer to beginning of list.
struct node *first = NULL;

// Pointer to end of list.
struct node *last = NULL;

void demo_data_struct()
{
	printf("Demonstrating data structures with pointers.\n\n");
	print_list(); nLine(1);
	find(2); nLine(1);
	add_to_begin(1);
	add_to_end(2);
	add_to_end(3);
	add_to_begin(0);
	for (int i = 4; i < 10; i++)
		add_to_end(i);
	print_list(); nLine(1);
	find(22); nLine(1);
	struct node *a = find(5);
	delete_prev(a);
	delete_next(a);
	delete_this(a);
	print_list(); nLine(1);
	destroy_list();
	print_list();
	print_sect_end();
}

// Adds new node with specified value to the end
// of the list.
void add_to_end(int val)
{
	struct node *new_n = malloc(sizeof(struct node));
	if (new_n == NULL) {
		printf("ERROR adding to end.");
		return;
	}
	new_n->val = val;
	new_n->prev = NULL;
	new_n->next = NULL;
	if (first == NULL)
		first = new_n;
	if (last == NULL)
		last = new_n;
	else {
		new_n->prev = last;
		last->next = new_n;
		last = new_n;
	}
}

// Adds new node with specified value to the
// beginning of the list.
void add_to_begin(int val)
{
	struct node *new_n = malloc(sizeof(struct node));
	if (new_n == NULL) {
		printf("ERROR adding to beginning.");
		return;
	}
	new_n->val = val;
	new_n->prev = NULL;
	new_n->next = NULL;
	if (first == NULL)
		first = new_n;
	if (last == NULL)
		last = new_n;
	else {
		new_n->next = first;
		first->prev = new_n;
		first = new_n;
	}
}

// Deletes the node previous to the specified
// node if it exist.
void delete_prev(struct node *n)
{
	if (n == NULL || n->prev == NULL)
		return;
	if (n->prev->prev == NULL) {
		free(n->prev);
		n->prev = NULL;
		first = n;
	} else {
		struct node *temp = n->prev->prev;
		free(n->prev);
		n->prev = NULL;
		temp->next = n;
		n->prev = temp;
	}
}

// Deletes the node after the specified node
// if it exists.
void delete_next(struct node *n)
{
	if (n == NULL || n->next == NULL)
		return;
	if (n->next->next == NULL) {
		free(n->next);
		n->next = NULL;
		last = n;
	} else {
		struct node *temp = n->next->next;
		free(n->next);
		n->next = NULL;
		temp->prev = n;
		n->next = temp;
	}
}

// Deletes the specified node from the list.
void delete_this(struct node *n)
{
	if (n == NULL) return;
	if (n->next == NULL && n->prev == NULL) {
		free(n);
		n = NULL;
	} else if (n->next == NULL) {
		struct node *temp = n->prev;
		free(n);
		n = NULL;
		last = temp;
	} else if (n->prev == NULL) {
		struct node *temp = n->next;
		free(n);
		n = NULL;
		first = temp;
	} else {
		struct node *temp = n->prev;
		temp->next = n->next;
		n->next->prev = temp;
		free(n);
		n = NULL;
	}
}

// Returns a pointer to the node with the
// specified value if it exists.
struct node *find(int val)
{
	struct node *n = first;
	if (n == NULL) {
		printf("List is null.");
		return n;
	} else {
		while (n != NULL && n->val != val)
			n = n->next;
		if (n == NULL || n->val != val) {
			printf("Value is not in list.");
			return n;
		} else {
			return n;
		}
	}
}

// Returns the value of the specified node.
int get_val(struct node *n)
{
	if (n == NULL)
		return NOT_FOUND;
	return n->val;
}

// Frees all memory for the list.
void destroy_list()
{
	if (first == NULL) return;
	struct node *n = first;
	while (n->next != NULL) {
		n = n->next;
		free(n->prev);
		n->prev = NULL;
	}
	free(n);
	first = NULL;
	last = NULL;
	n = NULL;
}

// Prints the list values in order of 
// beginning to end.
void print_list()
{
	struct node *n = first;
	printf("The list is as follows: ");
	if (n == NULL)
		printf("No list created.\n");
	else {
		while (n != NULL) {
			printf(" %d", n->val);
			n = n->next;
		}
	}
}


//*** Demonstrating pointers to other pointers.

void point_to_other(int**, int*);

void demo_pointer_to_pointer()
{
	printf("Demonstrating pointers to other pointers.\n\n");
	int var1 = 15, var2 = 30, *ptr = &var1;
	printf("Before -\n");
	printf("ptr: %p; ptr deref: %d\n", ptr, *ptr);
	point_to_other(&ptr, &var2);
	printf("After -\n");
	printf("ptr: %p; ptr deref: %d\n", ptr, *ptr);
	print_sect_end();
}

// Points ptr to other.
void point_to_other(int **ptr, int *other)
{
	*ptr = other;
}


//*** Demonstrating pointers to functions.

int perform_op(int(*)(int), int, int);
int add(int, int);
int sub(int, int);

void demo_pointer_to_function()
{
	printf("Demonstrating the use of array names as pointers.\n\n");
	int var1 = 10, var2 = 5;
	printf("Operands to be used: %d and %d\n", var1, var2);
	printf("Result of adding: %d\n", perform_op(add, var1, var2));
	printf("Result of subtracting: %d", perform_op(sub, var1, var2));
	print_sect_end();
}

// Performs operation specified on val1 and val2.
// Returns the result.
int perform_op(int(*fxn)(int), int val1, int val2)
{
	return (*fxn)(val1, val2);
}

// Returns the sum of a and b.
int add(int a, int b)
{
	return a + b;
}

// Returns the difference of a and b.
int sub(int a, int b)
{
	return a - b;
}

//*** Demonstrating flexible array members.

struct string {
	int length;
	char str[];
};

void demo_flexible_array()
{
	printf("Demonstrating flexible array members.\n\n");
	struct string *s1 = malloc(sizeof(struct string) + (sizeof(char) * SIZE));
	struct string *s2 = malloc(sizeof(struct string) + (sizeof(char) * SIZE));
	if (s1 == NULL || s2 == NULL) return;
	s1->length = SIZE;
	s2->length = SIZE;
	strcpy(s1->str, "abcd");
	strcpy(s2->str, "efgh");
	printf("s1 length: %d; s2 length: %d\n", s1->length, s2->length);
	printf("s1 str: %s; s2 str: %s\n", s1->str, s2->str);
	printf("s1: %p; s2: %p", s1, s2);
	free(s1); free(s2);
	print_sect_end();
}


//*** Helper functions.

// Prints line to break up sections of project
// within the console.
void print_sect_end()
{
	printf("\n\n---------------------------------------------\n\n\n");
}

// Prints a new line arg times.
void nLine(int lines)
{
	for (int i = 0; i < lines; i++)
		printf("\n");
}
