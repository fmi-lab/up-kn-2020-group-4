## For loops. Functions

### For loop:
```
    for (init; condition; increment) 
        statement(s);
    
```

- Omitted expressions:
```
    int count=0;
    for ( ; count < 10; ) {
        std::cout << count << ' ';
        ++count;
    }
    
```

- Infinite loop:
```
    for (;;)
        statement; 
```

- Multiple declarations;

- Nested for loops;

- Break; Continue;


### Functions

```
    return-type function_name() {
        // code
    }
```

- Calling functions more than once;

- Functions calling functions calling functions;

- Nested functions are not supported;

- Reusing functions;

- **MAIN** function should return 0 if the program ran normally;

-  *Always explicitly provide a return value for any function that has a non-void return type!*

-  *Failure to return a value from a function with a non-void return type (other than main) will result in undefined behavior!*


## ЗАДАЧИ

### Задача 1:
Да се напише програма, която извежда всички естествени трицифрени числа, които нямат еднакви цифри.

### Задача 2:
Да се напише програма, която въвежда числo от конзолата n и пресмята и отпечатва първите n члена на редицата:
``` 
аi = i^2 + 3*i
```

### Задача 3:
Да се изведе следното на екрана:
```
    7 6 5 4 3 2 1
    6 5 4 3 2 1
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1 
```

### Задача 4:
Да се определи дали въведено числo от конзолата е “нарцистично”. Число n се нарича нарцистично, ако изпълнява следното условие: *n = (ak)^k + (ak-1)^k + … + (a2)^k + (a1)^k*, тоест сумата от цифрите на числото, повдигнати на степен броя на цифрите, да е самото число.

### Задача 5:
Да се напише програма, която извежда всички четирицифрени числа, чиито сбор на първите две цифри е равен на сбора на вторите две цифри.

### Задача 6:
Да се състави програма, която по въведено естествено число от интервала [100..30000] извежда последователно на всеки ред: цифра от числото, и до нея толкова знака '#', колкото е съответната цифра. Цифрите на числото се извеждат отдясно-наляво.

### Задача 7:
Въведете n числа и изведете кое е числото с най-много нули в записа си и колко са нулите.

### Задача 8:
Въведете реалното число x и естественото число n. Напишете програма, която пресмята сумата:
```
    s = 1 + x/1! + (x^2)/2! + ... (x^n)/n!
```