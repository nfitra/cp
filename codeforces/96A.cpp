#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include<cmath>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lcase(s) transform(s.begin(),s.end(),s.begin(), :: tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s)/sizeof(s[0])
#define all(s) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast;

    bool flag = 0;

    string s1;
    cin >> s1;

    int c = 1;
    loop(s1.length())
    {
        if(c == 7)
        {
            flag = 1;
            break;
        }

        if(s1[i] == s1[i+1])
        {
            c++;
        }
        else
        {
            c=1;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
