#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    while(n--)
    {
        int i;
        cin >> i;
        bool exist = 0;

        for(auto x : v)
        {
            if(i == x)
            {
                exist = 1;
                break;
            }
        }
        if(!exist)
        {
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end(), greater<int>());

    if(v.size() > 3)
    {
        v.erase(v.begin() + 3, v.end());
    }

    int sum=0;
    for(auto x : v)
    {
        sum += x;
    }
    cout << sum << endl;
}
