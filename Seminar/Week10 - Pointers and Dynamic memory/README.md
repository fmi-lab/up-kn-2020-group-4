## Pointers and Dynamic memory

## Multidimensional Arrays


### The address-of operator (&):
```
	x   // value of variable x
    &x  // memory address of variable x
```

### The indirect operator (\*):
```
	*(&x) // value at the memory address of variable x (parenthesis not required, but make it easier to read)
```


### Null pointers:

- **null** value is a special value that means the pointer is not pointing at anything;
```
int* ptr = 0;
```

- Initialize your pointers to a null value if you’re not giving them another value!

- The NULL macro;

- Use **nullptr** to initialize your pointers to a null value.


### Array decay:

```
	&array[0]  // address of element 0
	array     // value of the pointer the array decays to
```

```
	int array[5] = {1, 2, 3, 4, 5};
	cout << *array; // will print 1
 
	char name[] = "Cveti";
	cout << *name; // will print 'C'
```

- Passing fixed arrays to functions:
```
	void func(int* arr) {
	    // arr is treated as a pointer here
	}
```

```
	// C++ will implicitly convert parameter arr[] to *array
	void printSize(int arr[]) {
	    // arr is treated as a pointer here, not a fixed array
	}
```


### Pointer arithmetic:

- *ptr + 1* does not return the memory address after ptr, but the memory address of the next object of the type that ptr points to;

- Using a pointer to iterate through an array;

```
	&array[1]  // memory address of array element 1
	array+1    // memory address of array pointer + 1 
 
	array[1]   // value of array element 1
	*(array+1) // value of array pointer + 1 (parenthesis required here)
 
```

### Dynamic memory allocation with new and delete:

- Dynamically allocating single variables:
```
	int* ptr = new int; // dynamically allocate an integer and assign the address to ptr so we can access it later
	*ptr = 5; // assign value of 5 to allocated memory
or
	int* ptr = new int(5);
```

- Deleting single variables;

- Dangling pointers - pointer that is pointing to deallocated memory;

- Memory leaks:

- Dynamically allocating arrays:
```
	size_t length = 5;
	int *array = new int[length]; // length does not need to be constant!
	delete[] array; 

```

- Initializing dynamically allocated arrays:
```
	int *array = new int[5]{ 9, 7, 5, 3, 1 }; // initialize a dynamic array since C++11
	char *array = new char[14] { "Hello, world!" }; // doesn't work in GCC, though it should
```


### Pointers and const:

- Pointer to const value:
```
	const int value = 5; // const is optional
	const int *ptr = &value;
```

- Const pointers:
```
	int value = 5;
	int *const ptr = &value;
```

- Const pointer to a const value:
```
	int value = 5;
	const int *const ptr = &value;

```


### Pointers to pointers and dynamic multidimensional arrays:
- Dynamically allocating multidimensional arrays:
```
	int rowCount = 3;
	int colCount = 3;
    int **arr = new int*[rowCount];
    for (int i = 0; i < rowCount; i++) {
        arr[i] = new int[colCount];
    }
```

- Deallocating a dynamically allocated multidimensional arrays:
```
	for(int i = 0; i < rowCount; i++) {
        delete[] arr[i];
    }

    delete[] arr;

```



## ЗАДАЧИ

### Задача 1:
Да се напише функция, която намира най-малкия и най-големия елемент в масив.

### Задача 2:
Да се напише функция, която записва главния диагонал на даден двумерен масив в едномерен масив.

### Задача 3: 
Да се напише функция, която създава двумерен масив с N елемента.

### Задача 4: 
Да се напише функция, която създава двумерен масив с N реда и M колони.

### Задача 5: 
Да се напише функция, която изтрива двумерен масив с N реда и M колони.

### Задача 6:
Да се напише функция, която приема двумерен масив и връща такъв с първите m колони и n реда на първия.