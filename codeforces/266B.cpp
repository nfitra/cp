#include <iostream>
using namespace std;

int main()
{
    int n, t;
    string s, tmp;

    cin >> n >> t;
    cin >> s;

    while(t--)
    {
        for(int x=n-2; x>=0; x--)
        {
            if(s[x] == 'B' && s[x+1] == 'G')
            {
                tmp[0] = s[x+1];
                s[x+1] = s[x];
                s[x] = tmp[0];
                x--;
            }
        }
    }
    cout << s << endl;
}
