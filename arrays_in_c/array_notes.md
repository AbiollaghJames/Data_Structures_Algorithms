1. ARRAY is a user defined data type that stores related information together/ An array is a collection of similar data elements.
   These data elements have the same data type and the elements are stored in consecutive memory location and are referred by an index.

2. DECLARATION OF ARRAYS
An array or any data type must be declared before being used.
Declararing a array means specfying;
	- Data type - e.g. it'll store an int, char, float, double
	- Name - To identify the array
	- Size - Maximum number of values the array can hold
Array is declared using this syntax;
	type name[size];

3. ACCESSING THE ELEMENTS OF AN ARRAY
There is no specific function to access all elements of an array.
Therefore, to access all elements, we must use a loop. That is, we can access all the elements of an array
by varying the value of the subscript into the array.
The subscript must be an integral value or an expression that evaluates to an integral value.
Here is an example of a code that accesses all elements of an array and set it's value to -1.

	//set each element of the array to -1
	int i, marks[10];

	for (i = 0; i < 10; i++)
		marks[i] = -1;

You must be wondering how C gets to know where an individual element of an array is located in the memory.
The answer is that the array name is a symbolic reference to the address of the first byte of the array.
When we use the array name, we are actually referring to the first byte of the array.
The subscript or the index represents the offset from the beginning of the array to the element being referenced.
That is, with just the array name and the index, C can calculate the address of any element in the array.
Since an array stores all its data elements in consecutive memory locations, storing just the base address, that is
the address of the first element in the array, is sufficient. The address of other data elements can simply be calculated
using the base address. The formula to perform this calculation is,

Address of data element, A[k] = BA(A) + w(k – lower_bound)

Here, A is the array, k is the index of the element of which we have to calculate the address, BA is
the base address of the array A, and w is the size of one element in memory, for example, size of
int is 2.

To calculate length of an array;
The length of an array is given by the number of elements stored in it. The general formula to
calculate the length of an array is

Length = upper_bound – lower_bound + 1

where upper_bound is the index of the last element and lower_bound is the index of the first element
in the array.

OPERATIONS ON ARRAYS
	- Traversing an array
	- Inserting an element in an array
	- Searching an element in an array
	- Deleting an element from an array
	- Merging two arrays
	- Sorting an array in ascending or descending order
- Traversing an array means accessing each and every element of the array for a specific purpose.
- Traversing the data elements of an array can include printing every element, counting the
  total number of elements, or performing any process on these elements. Since, array is a linear
  data structure (because all its elements form a sequence), traversing its elements is very simple
  and straightforward.

Algorithm for Array traversal
 1. [INITIALIZATION] set i = lower_bound
 2. Repeat steps 3 to 4 while i <= upper_bound
 3.	Apply process to array[i]
	Set i = i + 1
	[END OF LOOP]
 5. EXIT

Step 1. We initialize index to lower bound of array
Step 2. Execute a while loop
Step 3. Processes individual array element as specified by array name and index value
Step 4. Increment index value so that next array element could be processed
While loop in step 2 is executed until all elements in array are processed i.e.
util i is less tha or equal upper bound of the array.
