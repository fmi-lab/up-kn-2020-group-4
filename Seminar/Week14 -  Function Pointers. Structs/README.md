# Function Pointers. Structs

## Function Pointers
### Syntax:
```
	<type> (*<name>)(<params>)
```

#### Assigning a function to a function pointer:
```
	<return_type> (*<func_ptr_name>)(<param_type>) { &<func_name> };
or
	<return_type> (*<func_ptr_name>)(<param_type>);
	<func_ptr_name> = &<func_name>;
```

- <b>Task:</b> Ok or Wrong?
```
	// function prototypes
	int foo();
	double goo();
	int hoo(int x);
	 
	// function pointer assignments
	int (*fcnPtr1)(){ &foo }; 
	int (*fcnPtr2)(){ &goo }; 
	double (*fcnPtr4)(){ &goo }; 
	fcnPtr1 = &hoo;  
	int (*fcnPtr3)(int){ &hoo }; 
```

### Calling a function using a function pointer:
```
	<return_type> (*<func_ptr_name>)(<param_type>){ &<func_name> };

    (*<func_ptr_name>)(<param>); 
or
    <func_ptr_name>(<param>); 
```

### Passing functions as arguments to other functions:
```
	// declate function1
	<return_type1> <func_name1>(<params>, <return_type2> (*<func_ptr_name>)(<param_type>)); 
	{
		body
	}

	// function2
	<return_type2> <func_name2>(<params>);
	{
		body
	}

	// calling a function1
	<func_name1>(<params>, <func_name2>);

```

- <b>Note</b>: If a function parameter is of a function type, it will be converted to a pointer to the function type. This means:
```
		<return_type1> <func_name>(<params>, <return_type2> (*<func_ptr_name>)(<param_type>));
equals
		<return_type1> <func_name>(<params>, <return_type2> <func_ptr_name>(<param_type>));
```

- Providing default functions:
```
		<return_type1> <func_name>(<params>, <return_type2> (*<func_ptr_name>)(<param_type>) = <default_func_name>); 
```

### Making function pointers prettier with type aliases:
```
	using FuncPtr = <return_type1>(*)(<param_type>);

	<return_type2> <func_name>(<params>, FuncPtr funcPtrName);
```


## Structs
### Declaring structs:
```
	struct <Struct_name> 
	{
    	<param_type> <param_name>;
	};
```

### Declaring and defining structs:
```
	<Struct_name> <name>;
```

### Accessing struct members:
```
	<Struct_name> <name>;
	<name>.<param_name> = <value>;
```

### Initializing structs:
```
	<Struct_name> <name> {<value>};
```

### Structs and functions

### Nested structs



# ЗАДАЧИ

## Указатели към функции:

### Задача 1:
Напишете функцията <b>any_of</b>, която проверява дали някой от елементите в масив отговаря на предикатната функция(на определено условие). Нека функцията има следните параметри: масив от тип int, размер на масива и указател към функция от тип:
```
	bool (*<name>)(int <param_name>);
```

### Задача 2:
Напишете функцията <b>all_of</b>, която проверява дали всички елементи в масив отговаря на предикатната функция(на определено условие). Нека функцията има следните параметри: масив от тип int, размер на масива и указател към функция от тип:
```
	bool (*<name>)(int <param_name>);
```

### Задача 3:
Напишете функцията <b>sort</b>, която сортира елементите в масив спрямо сравняваща функция. Нека функцията има следните параметри: масив от тип int, размер на масива и указател към функция от тип:
```
	bool (*<name>)(int <param_name1>, int <param_name2>);
```

### Задача 4:
Да се напишат 2 функции, с имплементации по ваш избор, и тествайте задачи 1 и 2. Функциите да имат следния вид:
```
	bool <name>(int <param_name>);
```

### Задача 5:
Да се напишат 2 функции, с имплементации по ваш избор, и тествайте задачa 3. Функциите да имат следния вид:
```
	bool <name>(int <param_name1>, int <param_name2>);
```


## Структури:

### Задача 6:
Да се напише структура "Book", която съдържа следната информация(полета):
	
	- име на книгата
	- име на автора
	- жанр
	- цена
	- брой продажби
	- други по ваш избор

//Определите кои са подходящите типове за полетата на тази структура.

### Задача 7:
Напишете функция, която прочита въведени стойности и ги задава като стойности на полетата на подаден обект: 
```
		void initialize(Book& b);
```

### Задача 8:
Въведете масив от 10 книги, като използвате горната функция.

### Задача 9:
Напишете функция, която отпечатва информацията от даден обект горния тип.
```
		void print(const Book& b);
```

### Задача 10:
Напишете функиции, която отпечатва книгата с най-ниска цена и с най-висока цена:
```
	- void printBookWithLowestPrice(Book* books, size_t count);

	- void printBookWithHighestPrice(Book* books, size_t count);
```

### Задача 11:
Напишете функция, която намира книгата с най-много продажби:
```
		Book& getBestBook(Book* books, size_t count);
```