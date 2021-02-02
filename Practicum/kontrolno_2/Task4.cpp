/* 
Дадено е естествено число N (1 < N < 20). Вашата програма трябва да въведе N цели числа. 
След това трябва да намери минималната стойност на израза, който се получава като между всеки две съседни числа се сложи един от знаците ‘+’, ‘-’ или ‘*’. 
Не можете да размествате числата или да добавяте скоби. Изчислението на този израз следва стандартните математически правила за приоритет и асоциативност.

Пример:

вход:             изход:
3                 -17
-2 3 -5
(обяснение: най-малката стойност се получава от израза -2 + 3 * -5)

вход:             изход:
4                 -8
1 5 0 4
(обяснение: най-малката стойност се получава от израза 1 - 5 + 0 - 4)

 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// generate all possible sign placements
void iterate(int *values, int current, int n, int exp, int &opt)
{
    if (current == n) {
        if (exp < opt) {
            opt = exp;
        }

        return;
    }

    if (current == 0) {
        iterate(values, current + 1, n, values[current], opt);

        return;
    }

    iterate(values, current + 1, n, exp + values[current], opt);

    iterate(values, current + 1, n, exp - values[current], opt);
    
    int tmp = values[current + 1];
    values[current + 1] *= values[current];
    iterate(values, current + 1, n, exp, opt);
    values[current + 1] = tmp;
}

int main()
{
    int n, opt;
    cin >> n;
    int *values = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> values[i];
        opt += values[i];
    }

    iterate(values, 0, n, 0, opt);

    cout << opt << endl;
}
