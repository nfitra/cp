#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int year=0;
    while(!(a>b))
    {
        a *= 3;
        b *= 2;
        year += 1;
    }
    cout << year << endl;
}
