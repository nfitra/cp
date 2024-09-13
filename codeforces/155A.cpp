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

    int minnum, maxnum;
    int res=0;
    for(int x=0; x<n; x++)
    {
        int num;
        cin >> num;

        if(x==0)
        {
            minnum = num;
            maxnum = num;
            continue;
        }

        if(minnum>num)
        {
            minnum = num;
            res++;
        }
        else if(maxnum<num)
        {
            maxnum = num;
            res++;
        }
    }
    cout << res << endl;
}
