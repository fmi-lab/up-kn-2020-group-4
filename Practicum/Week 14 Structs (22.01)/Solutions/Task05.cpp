#include <iostream>
#include <string.h>

const int N = 100;

struct Book
{
    char name[N];
    char author[N];
    double price;
};

Book *createBookArray(int n)
{
    Book *books = new Book[n];
    for (int i = 0; i < n; i++)
    {
        //used in order to input the name correctly
        std::cin.get();

        std::cout << "Enter a name: ";
        std::cin.getline(books[i].name, 100);

        std::cout << "Enter an author: ";
        std::cin.getline(books[i].author, 100);

        std::cout << "Enter a price: ";
        std::cin >> books[i].price;
    }
    return books;
}

bool compareByName(Book &first, Book &second)
{
    if (strcmp(first.name, second.name) < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool compareByAuthor(Book &first, Book &second)
{
    if (strcmp(first.author, second.author) < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool compareByPrice(Book &first, Book &second)
{
    if (first.price < second.price)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void print(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << books[i].name << " ";
    }
    std::cout << std::endl;
}

using compareFunc = bool (*)(Book &, Book &);
//I was told you should know higher order functions.
void sortWithHigherOrderFunctions(compareFunc f, Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (f(books[i], books[j]))
            {
                std::swap(books[i], books[j]);
            }
        }
    }
}

void sort(int sortBy, Book *books, int size)
{
    if (sortBy == 1)
    {
        sortWithHigherOrderFunctions(compareByName, books, size);
    }
    else if (sortBy == 2)
    {
        sortWithHigherOrderFunctions(compareByAuthor, books, size);
    }
    else if (sortBy == 3)
    {
        sortWithHigherOrderFunctions(compareByPrice, books, size);
    }
    else
    {
        std::cerr << "Wrong sorting parameter" << std::endl;
    }

    print(books, size);
}

//For those who don't understande them higher order functions;
//By comparing the amount of code it is easy to see whi higher order functions are better
void sortByAuthor(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (compareByAuthor(books[i], books[j]))
            {
                std::swap(books[i], books[j]);
            }
        }
    }
}

void sortByName(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (compareByName(books[i], books[j]))
            {
                std::swap(books[i], books[j]);
            }
        }
    }
}

void sortByPrice(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (compareByPrice(books[i], books[j]))
            {
                std::swap(books[i], books[j]);
            }
        }
    }
}

void sortWithoutHigherOrder(int sortBy, Book *books, int size)
{
    if (sortBy == 1)
    {
        sortByName(books, size);
    }
    else if (sortBy == 2)
    {
        sortByAuthor(books, size);
    }
    else if (sortBy == 3)
    {
        sortByPrice(books, size);
    }
    else
    {
        std::cerr << "Wrong sorting parameter" << std::endl;
    }

    print(books, size);
}

int main()
{
    int n;
    std::cout << "Insert a number" << std::endl;
    std::cin >> n;
    Book *books = createBookArray(n);
    int sortBy;
    std::cout << "What do you want to sort by - 1 for name, 2 for author, 3 for price?" << std::endl;
    std::cin >> sortBy;
    //HigherOrderVariant
    std::cout << "With higher order functions!" << std::endl;
    sort(sortBy, books, n);
    std::cout << "Without higher order functions!" << std::endl;
    //NormalVarient
    sortWithoutHigherOrder(sortBy, books, n);
}