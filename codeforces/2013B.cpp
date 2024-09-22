#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cmath>
#include <unordered_map>

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s) / sizeof(s[0])
#define all(s) x.begin(), x.end()
#define loop(n) for (int i = 0; i < n; i++)
#define arrsort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        if (n == 2)
        {
            cout << a[1] - a[0] << endl;
        }
        else
        {
            int scr = 0;
            for (int x = 0; x < n-1; x++)
            {
                int tmpScr;
                int winnerIdx, loseIdx;

                tmpScr = a[1] - a[0];
                winnerIdx = 1;
                loseIdx = 0;
                for (int i = 1; i < a.size() - 1; i++)
                {
                    for (int j = i + 1; j < a.size(); j++)
                    {

                        if (a[j] - a[i] < tmpScr)
                        {
                            tmpScr = a[j] - a[i];
                            winnerIdx = j;
                            loseIdx = i;
                        }
                    }
                }
                for (int i = 0; i < a.size(); i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
                cout << "IDX: " << winnerIdx << " " << loseIdx << endl;

                a[winnerIdx] = tmpScr;
                a.erase(a.begin() + loseIdx);
            }

            cout << a[0] << endl;
        }
    }
}