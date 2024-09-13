#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define sz(s) sizeof(s)/sizeof(s[0])
#define all(s) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast

    int n;
    cin >> n;

    int res=0;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "Tetrahedron")
            res+=4;
        else if(s == "Cube")
            res+=6;
        else if(s == "Octahedron")
            res+=8;
        else if(s == "Dodecahedron")
            res+=12;
        else
            res+=20;
    }
    cout << res << endl;
}
