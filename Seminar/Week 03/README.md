## Оператори if и switch

### Оператор if
    if (expression)
        statement

    if (expression)
        statement
    else
        statement2

    if (expression)
        statement
    else if
        statement2
    else
        statement3

- Nested if statements

- Using logical operators with if statements

- Null statements - statement with no body:
` if (x == 0);
    x == 1;`

- Operator== vs Operator= inside the conditional


### Оператор switch

    swith(x)
    {
    }
**x** must be  **char**, **short**, **int**, **long**, **long long**, or **enum**. 
Floating point variables, strings, and other non-integral types may not be used here.

- Case labels and the default label:
```
    switch (c)
    {
        case '0': // if c is 0
        case '1': // or if c is 1
        case '2': // or if c is 2
        case '3': // or if c is 3
        case '4': // or if c is 4
        case '5': // or if c is 5
        case '6': // or if c is 6
        case '7': // or if c is 7
        case '8': // or if c is 8
        case '9': // or if c is 9
            std::cout << true;
        default:
            std::cout << false;
    }
```

- Break statements:

## ЗАДАЧИ

### Задача 1:
Да се въведат три числа и да се изведе най-голямото от тях.

### Задача 2:
Да се въведат две числа n и m(n е трицифрено, а m е едноцифрено). Да се изведе на конзолата true ако m се съдържа в записа на числото n или false - ако не се съдържа.

### Задача 3:
Да се въведе трицифрено число. Да се намерят и отпечатат цифрите му и да се намери сумата им.

### Задача 4:
Да се въведат две страни на правоъгълник. Да се провери дали е квадрат и ако е квадрат да се изпише като съобщение на конзолата. След това да се намерят и отпечатат периметърът и лицето на въведеният правоъгълник/квадрат.

### Задача 5:
Нека се въведе число. Ако то не е в интервала 2211 и 8999 да се отпечата съобщение за грешка. Ако е в този интервал, да се въведе едноцифреното число m и да се изведе колко пъти m се съдържа във въведеното число.

### Задача 6:
Нека се въведе трицифрено число. Подредете цифрите му във възходящ ред.

### Задача 7:
Да се въведе трицифрено число и да се провери дали то е палиндром.

### Задача 8:
Решете линейното уравнение a.x + b = 0. Въведете числата a и b (от тип double) и разгледайте различните случаи.

### Задача 9:
Напишете програма, която извежда дали въведена цифра е четно или нечетно число. Използвайте switch.

### Задача 10:
Напишете програма, в която потребителя въвежда число, след което на екрана се изписва това число на кой месец от годината съответства.

### Задача 11:
Напишете програма, в която потребителя въвежда число(съответстващо на месец от годината) и да се изпише на конзолата колко дни има този месец.