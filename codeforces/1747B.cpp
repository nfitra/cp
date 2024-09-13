#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lcase(s) transform(s.begin(),s.end(),s.begin(), :: tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define sz(x) sizeof(x)/sizeof(x[0])
#define all(x) x.begin(),x.end()
#define fl(i,x,n) for (int i = x; i < n; i++)
#define yes "YES"
#define no "NO"
#define ll long long
#define ull unsigned long long
#define nl << endl
#define spc << " "
#define input(cont) for(auto &in : cont) cin >> in
#define arrsort(arr) sort(arr, arr + sizeof(arr)/sizeof(arr[0]))
#define nsort(cont) sort(cont.begin(), cont.end())
#define rsort(cont) sort(cont.rbegin(), cont.rend())
#define reverse(cont) reverse(cont.begin(), cont.end())
#define mini(cont) *min_element(cont.begin(), cont.end())
#define maxi(cont) *max_element(cont.begin(), cont.end())
#define sum(cont) accumulate(cont.begin(), cont.end(), 0)

using namespace std;

int main()
{
    fast
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        n=3*n;
        vector<pair<ll,ll>> ans;
        long long int i=2,j=n;
        while(i<j)
        {
            if(j%3==0)
            {
                ans.push_back({i,j});
                i=i+3;
            }
            j--;
        }

        cout << ans.size() nl;
        for(ll i=0; i<ans.size(); i++)
        {
            cout << ans[i].first spc << ans[i].second nl;
        }
    }
}

