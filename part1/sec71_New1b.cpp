#include <iostream>
using namespace std;

int main()
{
    int* p;

    p = new int;
    if(p == NULL)
        return 0;

    *p = 0;
    cout << *p << endl;

    delete p;

    return 0;
}
