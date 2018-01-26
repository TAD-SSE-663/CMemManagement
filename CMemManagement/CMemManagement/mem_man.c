#include <stdio.h>


//*** Helper functions.

void print_sect_end();


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
void demo_linked_list();
void demo_pointer_to_pointer();
void demo_pointer_to_function();
void demo_restrict_pointer();
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
	demo_linked_list();
	demo_pointer_to_pointer();
	demo_pointer_to_function();
	demo_restrict_pointer();
	demo_flexible_array();

	system("pause");
	return 0;
}


//*** Demonstrating pointer and normal variable
//*** similarities and differences.

void demo_pointers_and_normal_variables()
{
	
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

void demo_pointer_as_argument()
{

}


//*** Demonstrating the use of arrays as arguments
//*** for functions.

void demo_array_as_argument()
{

}


//*** Demonstrating functions that return a pointer,
//*** not a normal variable.

void demo_pointer_as_return()
{

}


//*** Demonstrating pointer arithmetic.

void demo_pointer_arithmetic()
{

}


//*** Demonstrating the use of pointer variables
//*** as an array.

void demo_pointer_as_array()
{

}


//*** Demonstrating the use of array names as
//*** pointers.

void demo_array_as_pointer()
{

}


//*** Demonstrating the use of the stdlib function
//*** malloc and related topics.

void demo_malloc()
{

}


//*** Demonstrating the use of the stdlib function
//*** calloc and related topics.

void demo_calloc()
{

}


//*** Demonstrating the use of the stdlib function
//*** realloc and related topics.

void demo_realloc()
{

}


//*** Demonstrating the deallocation of memory in
//*** the C programming language. Also covering
//*** some other forms of memory allocation.

void demo_deallocation()
{

}


//*** Demonstrating linked lists and some other
//*** basic data structures.

void demo_linked_list()
{

}


//*** Demonstrating pointers to other pointers.

void demo_pointer_to_pointer()
{

}


//*** Demonstrating pointers to functions.

void demo_pointer_to_function()
{

}


//*** Demonstrating the use of the keyword
//*** 'restrict' and its effect on pointers.

void demo_restrict_pointer()
{

}


//*** Demonstrating flexible array members.

void demo_flexible_array()
{

}


//*** Helper functions.

// Prints line to break up sections of project
// within the console.
void print_sect_end()
{
	printf("\n\n---------------------------------------------\n\n\n");
}
