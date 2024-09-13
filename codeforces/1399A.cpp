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
#define flr(i,x,n) for (int i = x; i >= n; i--)
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
        int n;
        cin >> n;
        vector<int> arr;
        fl(i1,0,n)
        {
            cin >> arr[i1];
        }

        fl(i,0,n)
        {
            flr(j,n-1,i)
            {
                if(abs(arr[i]-arr[j])<=1)
                {
                    if(arr[i] < arr[j])
                        arr.erase(arr.begin()+i);
                    else
                        arr.erase(arr.begin()+j);
                }
            }
        }
    }
}
