# Pointers
A pointer is a variable that stores the memory address as its value.
A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. 
The address of the variable you're working with is assigned to the pointer using & operator.

# Syntax: 
datatype *var_name; 
int *ptr;   // ptr can point to an address which holds int data

# References and Pointers:
There are 3 ways to pass C++ arguments to a function:

* Call-By-Value
* Call-By-Reference with a Pointer Argument
* Call-By-Reference with a Reference Argument

# EXPERIMENT NO: 1
AIM: Change the value of a variable using pointer
Algorithm: 

--> STEP 1: START
--> STEP 2: Initialize a variable int a=10 and a pointer *aptr
--> STEP 3: Assign the address of a to aptr using '&' (address operator)
--> STEP 4: Assign new value to *aptr
--> STEP 5: Now print the value of a
--> STEP 6: STOP

OUTPUT
The original value of a is: 10
The address of a is: 0x7fff6d64eef4
The new value of a is: 15

# EXPERIMENT NO: 2
AIM: Incrementing the value of variable and its address using pointer
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int a=10 and a pointer *aptr
--> STEP 3: Assign the address of a to aptr using '&' (address operator)
--> STEP 4: Increment *aptr by 1
--> STEP 5: Now print the value of a and &a
--> STEP 6: STOP

OUTPUT
The original value of a is: 10
The original address of a is: 0x7ffee6ade564
The incremented value of a is: 11
The new address of a is: 0x7ffee6ade568

# EXPERIMENT NO: 3
AIM: To increment the value of variable using Call By Reference
Theory:
In call by reference, the address of the variable is passed into the function call as the actual parameter.
The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.
In call by reference, the memory allocation is similar for both formal parameters and actual parameters. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

Algorithm:
--> STEP 1: START
--> STEP 2: Initialize a variable int a=10 and create a function 
--> STEP 3: Pass the ADDRESS of a as its argument
--> STEP 4: Increment the value of a inside the function
--> STEP 5: Print both the values of a
--> STEP 6: STOP

OUTPUT
The original value of a: 10
The incremented value of a is: 11

# EXPERIMENT NO: 4
AIM: To increment the value of variable using Call By Reference
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int a=10 and create a function 
--> STEP 3: Pass the VALUE a as its argument
--> STEP 4: Increment 'a' inside the function
--> STEP 5: Print both the values of a
--> STEP 6: STOP

OUTPUT
The original value of a: 10
The incremented value of a is: 11

# EXPERIMENT NO: 5
AIM: Swap 2 numbers using pointers
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize 3 variable a=10,b=15,temp and create a function for swapping
--> STEP 3: Pass the ADDRESSEs of a and b as its argument
--> STEP 4: temp = *a;
            *a = *b;
            *b = temp;
--> STEP 5: Print both old and new values of a and b
--> STEP 6: STOP


OUTPUT
The original value of a and b are: 10	15
The value of a and b after swapping is: 15 10
