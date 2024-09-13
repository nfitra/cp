#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define ll long long
#define sz(s) sizeof(s)/sizeof(s[0])
#define strall(s) s.begin(),s.end()

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res=0;
    while(n!=0)
    {
        if(n>=100)
        {
            n-=100;
            res++;
        }
        else if(n>=20)
        {
            n-=20;
            res++;
        }
        else if(n>=10)
        {
            n-=10;
            res++;
        }
        else if(n>=5)
        {
            n-=5;
            res++;
        }
        else
        {
            n-=1;
            res++;
        }
    }
    cout << res << endl;
}
