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
//*** malloc and related topics.

void demo_malloc()
{
	printf("Demonstrating the use of the stdlib function malloc and related topics.\n\n");
	char *ptr = malloc(sizeof(char) * SIZE + 1);
	if (ptr == NULL) return;
	for (int i = 0; i < SIZE ; i++)
		ptr[i] = 'a' + i;
	ptr[SIZE] = '\0';
	printf(ptr);
	print_sect_end();
}


//*** Demonstrating the use of the stdlib function
//*** calloc and related topics.

struct cart_vect {
	int xComp;
	int yComp;
	int zComp;
};

void print_cart_vect(struct cart_vect *);

void demo_calloc()
{
	printf("Demonstrating the use of the stdlib function calloc and related topics.\n\n");
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
	struct cart_vect *cv2 = calloc(1, sizeof(struct cart_vect));
	if (cv2 == NULL) return;
	printf("\nAllocated cv2: ");
	print_cart_vect(cv2);
	print_sect_end();
}

// Prints the cartesian vector x, y, and z components.
void print_cart_vect(struct cart_vect *cv)
{
	printf("(%d,%d,%d)", cv->xComp, cv->yComp, cv->zComp);
}


//*** Demonstrating the use of the stdlib function
//*** realloc and related topics.

void demo_realloc()
{
	printf("Demonstrating the use of the stdlib function realloc and related topics.\n\n");
	char *ptr = calloc(SIZE * 2, sizeof(char));
	strcpy(ptr, "abcdefghi");
	printf(ptr); nLine(1);
	ptr = realloc(ptr, sizeof(char) * SIZE);
	printf(ptr);
	print_sect_end();
}


//*** Demonstrating the deallocation of memory in
//*** the C programming language.

void demo_deallocation()
{
	printf("Demonstrating the deallocation of memory in the C programming language.\n\n");
	char *ptr1 = calloc(SIZE, sizeof(char));
	char *ptr2 = calloc(SIZE, sizeof(char));
	printf("ptr1 initial: %p\n", ptr1);
	printf("ptr2 initial: %p\n", ptr2);
	free(ptr1);
	ptr2 = calloc(SIZE, sizeof(char));
	printf("ptr1 after free call: %p\n", ptr1);
	printf("ptr2 after free call: %p", ptr2);
	print_sect_end();
}


//*** Demonstrating data structures with pointers.

void demo_data_struct()
{
	printf("Demonstrating data structures with pointers.\n\n");
}


//*** Demonstrating pointers to other pointers.

void demo_pointer_to_pointer()
{
	printf("Demonstrating pointers to other pointers.\n\n");
}


//*** Demonstrating pointers to functions.

void demo_pointer_to_function()
{
	printf("Demonstrating the use of array names as pointers.\n\n");
}


//*** Demonstrating flexible array members.

void demo_flexible_array()
{
	printf("Demonstrating flexible array members.\n\n");
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
