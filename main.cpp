#include <iostream>
#include "array_class.h"

int main()
{
    Array <int, 5> a = {1, 2, 3, 4, 5};

    Array <int, 5> b;
    b = a;

    for(auto i = b.begin(); i != b.end(); i++)
    {
        std::cout << *i << ' ';
    }
    return 0;
}
