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

    int h[n], a[n];
    for(int x=0; x<n; x++)
    {
        cin >> h[x] >> a[x];
    }

    int res=0;
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n; y++)
        {
            if(h[x] == a[y])
                res++;
        }
    }
    cout << res << endl;
}

