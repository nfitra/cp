#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x,y,z;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> z;
        while(z--)
        {
            if(x > y)
            {
                x = x/2;
            }
            else
            {
                y = y/2;
            }
        }
        if(x > y)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << y << " " << x << endl;
        }
    }
}
