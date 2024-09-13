#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    int m, x, h, s;
    cin >> m >> x >> h >> s;

    int ta = 2;
    long long sum = 0;
    if(h==1)
    {
        sum = x+m;
    }
    else
    {
        for(int a=0; a<h; a++)
        {
//        cout << ta << endl;

            ta = ta + x;
            sum += ta;
//        cout << sum << endl;
        }
    }

    s = s - sum;
    if (s < 0)
    {
        s = abs(s);
        cout << "TIDAK " << s << endl;
    }
    else
    {
        cout << "YA " << s << endl;
    }
}
