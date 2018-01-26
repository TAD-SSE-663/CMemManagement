#include <stdio.h>

void PrintSectionEnd();

void DemonstratePointersAndNormalVariables();
void DemonstratePointerSizeComparison();
void DemonstratePointerAsArgument();
void DemonstrateArrayAsArgument();
void DemonstratePointerAsReturn();
void DemonstratePointerArithmetic();
void DemonstratePointerAsArray();
void DemonstrateArrayAsPointer();
void DemonstrateMalloc();
void DemonstrateCalloc();
void DemonstrateRealloc();
void DemonstrateDeallocation();
void DemonstrateLinkedList();
void DemonstratePointerToPointer();
void DemonstratePointerToFunction();
void DemonstrateRestrictPointer();
void DemonstrateFlexibleArray();

int main()
{
	printf("\nSSE 663 Project 1 - C Memory Management.");
	PrintSectionEnd();
	DemonstratePointersAndNormalVariables();
	DemonstratePointerSizeComparison();
	DemonstratePointerAsArgument();
	DemonstrateArrayAsArgument();
	DemonstratePointerAsReturn();
	DemonstratePointerArithmetic();
	DemonstratePointerAsArray();
	DemonstrateArrayAsPointer();
	DemonstrateMalloc();
	DemonstrateCalloc();
	DemonstrateRealloc();
	DemonstrateDeallocation();
	DemonstrateLinkedList();
	DemonstratePointerToPointer();
	DemonstratePointerToFunction();
	DemonstrateRestrictPointer();
	DemonstrateFlexibleArray();

	system("pause");
	return 0;
}

//*** Demonstrating pointer and normal variable
//*** similarities and differences.

void DemonstratePointersAndNormalVariables()
{
	
}


//*** Demonstrating size comparison between different
//*** pointers and relating normal types.

void DemonstratePointerSizeComparison()
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
	printf("Size of 2 member double array pointer: %d\n", sizeof(double*[2]));
	PrintSectionEnd();
}


//*** Demonstrating the use of pointers as arguments
//*** for functions.

void DemonstratePointerAsArgument()
{

}


//*** Demonstrating the use of arrays as arguments
//*** for functions.

void DemonstrateArrayAsArgument()
{

}


//*** Demonstrating functions that return a pointer,
//*** not a normal variable.

void DemonstratePointerAsReturn()
{

}


//*** Demonstrating pointer arithmetic.

void DemonstratePointerArithmetic()
{

}


//*** Demonstrating the use of pointer variables
//*** as an array.

void DemonstratePointerAsArray()
{

}


//*** Demonstrating the use of array names as
//*** pointers.

void DemonstrateArrayAsPointer()
{

}


//*** Demonstrating the use of the stdlib function
//*** malloc and related topics.

void DemonstrateMalloc()
{

}


//*** Demonstrating the use of the stdlib function
//*** calloc and related topics.

void DemonstrateCalloc()
{

}


//*** Demonstrating the use of the stdlib function
//*** realloc and related topics.

void DemonstrateRealloc()
{

}


//*** Demonstrating the deallocation of memory in
//*** the C programming language. Also covering
//*** some other forms of memory allocation.

void DemonstrateDeallocation()
{

}


//*** Demonstrating linked lists and some other
//*** basic data structures.

void DemonstrateLinkedList()
{

}


//*** Demonstrating pointers to other pointers.

void DemonstratePointerToPointer()
{

}


//*** Demonstrating pointers to functions.

void DemonstratePointerToFunction()
{

}


//*** Demonstrating the use of the keyword
//*** 'restrict' and its effect on pointers.

void DemonstrateRestrictPointer()
{

}


//*** Demonstrating flexible array members.

void DemonstrateFlexibleArray()
{

}


// Prints line to break up sections of project
// within the console.
void PrintSectionEnd()
{
	printf("\n\n---------------------------------------------\n\n\n");
}
