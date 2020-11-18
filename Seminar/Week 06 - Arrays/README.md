## Arrays 


### Array syntax:
```
    <type> <name>[<size>]
```


### Fixed array (fixed length array or fixed size array):

- array where the length is known at compile time;


### Array elements and subscripting:

- Each of the variables in an array is called an **element**;

- Subscript operator ([]) and a parameter called a subscript (or index) tells the compiler which element we want;


### Array’s range:

- For an array of length N, the array elements are numbered 0 through N-1;


### Fixed array declarations:

- Examples:

```
    int array[5]{}; 
```
 
```
    const int MAX_ARRAY_SIZE = 5;
    int array[MAX_ARRAY_SIZE]{}; 
```


### Initializing fixed arrays:

- Zero initialization;

- Omitted length:

```
	int array[5]{ 0, 1, 2, 3, 4 }; // explicitly define the length of the array

	int array[]{ 0, 1, 2, 3, 4 }; // let the initializer list set length of the array
```

* If you want to ensure a function does not modify the array elements passed into it, you can make the array const.*



### Passing arrays to functions:

- pass by value;

- pass by reference;



### Indexing an array out of range:

- When using arrays, ensure that your indices are valid for the range of your array!;



## ЗАДАЧИ

### Задача 1:
Да се напише функция, която разменя стойността на две променливи от един и същ тип.

### Задача 2:
Да се напише функция, която въвежда n елемента в масив.

### Задача 3:
Да се напише функция, която принтира елементите в масив.

### Задача 4:
Да се напише програма, която въвежда n елемента в масив и ги извежда в обратен ред.

### Задача 5:
Да се напише програма, която запълва масив с първите N числа, които са кратни на 5.

### Задача 6:
Да се напише програма, която изтрива всяко срещане на елемент k в масив.

### Задача 7:
Да се напише програма, която определя дали редица от числа е монотонно растяща (намаляваща).
