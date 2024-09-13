#include <iostream>
using namespace std;

int main()
{
    int n, x(0);
    cin >> n;
    string op;

    while(n--)
    {
        cin >> op;
        if(op[1] == '-')
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    cout << x << endl;
}
