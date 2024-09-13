#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define sz(s) sizeof(s)/sizeof(s[0])
#define strall(s) s.begin(),s.end()

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<char> s;
    string str;
    cin >> str;
    transform(strall(str), str.begin(),[](unsigned char c){ return tolower(c); });
    for(int x=0; x<n; x++)
    {
        s.insert(str[x]);
    }

    if(s.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
