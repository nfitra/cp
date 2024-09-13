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

    lcase(s1)

    string s2 = "aiueoy";
    string c;

    int x=0;
    for(int i=0; i<s1.length(); i++) {
        if(s2.find(s1[i]) == -1) {
            cout << '.' << s1[i];
        }
    }
}
