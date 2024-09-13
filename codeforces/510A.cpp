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

    int n,m;
    cin >> n >> m;

    for(int x=0; x<n; x++)
    {
        for(int y=0; y<m; y++)
        {
            if((x+3)%4==0)
            {
                if(y<m-1)
                    cout << ".";
                else
                    cout << "#";
            }
            else if((x+3)%2==0)
            {
                if(y>0)
                    cout << ".";
                else
                    cout << "#";
            }
            else
                cout << "#";
        }
        cout << endl;
    }
}
