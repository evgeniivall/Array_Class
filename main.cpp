#include <iostream>
//#include <array>
#include "array_class.h"
using namespace std;
int main()
{
    Array <int, 5> a = {1, 2, 3, 4, 5};

    Array <int, 5>b;
    b = a;

    cout << (a == b) << endl;
    for(int i = 0; i < a.size(); i++)
    {
        cout << b[i];
    }
    return 0;
}
