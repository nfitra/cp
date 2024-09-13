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

    int n;
    cin >> n;

    int police=0, untreated=0;
    while(n--)
    {
        int num;
        cin >> num;

        if(num > 0)
        {
            police += num;
            continue;
        }

        if(police == 0)
        {
            untreated++;
        }
        else
        {
            police--;
        }
    }
    cout << untreated << endl;
}
