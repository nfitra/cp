#include <iostream>
using namespace std;

int main()
{
    int x, sum=0;
    cin >> x;

    if(x%5==0)
        cout << x/5 << endl;
    else
    {
        sum = x/5;
        cout << sum + 1 << endl;
    }
}
