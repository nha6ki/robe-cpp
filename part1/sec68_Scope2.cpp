#include <iostream>
using namespace std;

int a = 1;

int main()
{
    cout << a << " : " << &a << endl;

    int a = 2;
    cout << a << " : " << &a << endl;

    {
        int a = 3;
        cout << a << " : " << &a << endl;
    }
    cout << ::a << " : " << &::a << endl;

    return 0;
}
