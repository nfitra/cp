#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define sz(x) sizeof(x)/sizeof(x[0])
#define all(x) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string comb;
    comb = s1 + s2;

    sort(all(comb));
    sort(all(s3));

    if(comb == s3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
