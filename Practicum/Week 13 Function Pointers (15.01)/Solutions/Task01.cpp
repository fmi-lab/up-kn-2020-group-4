#include <iostream>

typedef double (*modifyFn)(double a, int b);

void read(double numbers[], int &n, int &less, int &more) {
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }
    std::cin >> more >> less;
}

double increase(double number, int percent) {
    return number * (100 + percent) / 100;
}

double decrease(double number, int percent)
{
    return number * (100 - percent) / 100;
}

double modify(modifyFn fn, double number, int percent) {
    return fn(number, percent);
}

void process(double numbers[], int n, int less, int more) {

    for (int i = 0; i < n; i++) {
        std::cout << modify(increase, numbers[i], more) << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << modify(decrease, numbers[i], more) << ' ';
    }
}

int main()
{
    int n, less, more;
    double numbers[100];

    read(numbers, n, less, more);
    process(numbers, n, less, more);

    return 0;
}