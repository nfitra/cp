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

    string s1;
    cin >> s1;

    string s2 = "hello";

    int p = 0;
    for(int x=0; x<s1.length(); x++)
    {
        if(s2[p] == s1[x])
        {
            p++;

            if(p == 5)
            {
                break;
            }
        }
    }

    if(p == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
