#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string s;
    unsigned long int n;

    cin >> s;
    cin >> n;
    while(n--)
    {
        unsigned long int x;
        cin >> x;

        if(x==0)
        {
            unsigned long int y,z;
            cin >> y >> z;

            unsigned long int tail = z;
            unsigned long int maxnum=0;

            unsigned long int mid;
            if(z%2!=0)
            {
                mid = (z/2) + 1;
            }

            string subs = s.substr(y,(z+1)-y);
            string revstr = subs;
            reverse(revstr.begin(), revstr.end());

            if(subs == revstr)
            {
                maxnum = (z+1)-y;
            }
            else
            {
                string pre="", suf="";
                for(unsigned long int a=y; a<=z; a++)
                {
                    pre += s[a];
                    suf += s[tail];
                    if(pre == suf)
                    {
                        maxnum = pre.size();
                    }
                    tail--;
                }
            }

            cout << maxnum << endl;
        }
        else
        {
            unsigned long int y;
            char z;
            cin >> y >> z;

            s[y] = z;
        }
    }

}
