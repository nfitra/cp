#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    string n;
    int m1, m2, m3, m4, m5;

    cin >> n;
    int l[4] = {0}, r[4] = {0};
    int len = n.size();
    for(int x=0; x<len; x++)
    {
        if(n[x] == '{')
        {
            l[0] += 1;
        }
        else if(n[x] == '}')
        {
            r[0] += 1;
        }
        else if(n[x] == '[')
        {
            l[1] += 1;
        }
        else if(n[x] == ']')
        {
            r[1] += 1;
        }
        else if(n[x] == '(')
        {
            l[2] += 1;
        }
        else if(n[x] == ')')
        {
            r[2] += 1;
        }
        else if(n[x] == '<')
        {
            l[3] += 1;
        }
        else if(n[x] == '>')
        {
            r[3] += 1;
        }
    }

    if(l[0] == r[0] && l[1] == r[1] && l[2] == r[2] && l[3] == r[3])
    {
        m1 = 1;
        m2 = l[0];
        m3 = l[1];
        m4 = l[2];
        m5 = l[3];

    }
    else
    {
        m1 = 0;
        m2 = 0;
        m3 = 0;
        m4 = 0;
        m5 = 0;
    }

    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
    cout << m5 << endl;
}
