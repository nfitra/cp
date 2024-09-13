#include <iostream>
#include <unistd.h>
#include <limits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;

        int res=0;
        if(a%b != 0)
        {
            res = b - (a%b);
        }
        cout << res << endl;
    }
}
