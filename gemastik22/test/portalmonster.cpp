#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int n;
    long long int k;

    cin >> n >> k;
    long long int mon[n];
    for(int a=0; a<n; a++)
    {
        long long int monster;
        cin >> monster;
        mon[a] = monster;
    }

    vector<vector<long long int>> terowongan;
    while(k--)
    {
        int x,y;
        cin >> x >> y;

        if(!terowongan.size())
        {
            terowongan.push_back({x,y});
        }
        else
        {
            bool empty=1;
            for(int a=0; a<terowongan.size(); a++)
            {
                for(int b=0; b<terowongan[a].size(); b++)
                {
                    if(x == terowongan[a][b])
                    {
                        terowongan[a].push_back(y);
                        empty=0;
                        break;
                    }
                    if(y == terowongan[a][b])
                    {
                        terowongan[a].push_back(x);
                        empty=0;
                        break;
                    }
                }
            }
            if(empty)
            {
                terowongan.push_back({x,y});
            }
        }
    }

//    for(int a=0; a<terowongan.size(); a++)
//    {
//        for(int b=0; b<terowongan[a].size(); b++)
//        {
//            cout << terowongan[a][b] << " ";
//        }
//        cout << endl;
//    }

//    for(int a=0; a<n; a++)
//    {
//        cout << mon[a] << endl;
//    }


    long long int res=0, multi=1;
    for(int a=0; a<terowongan.size(); a++)
    {
        for(int b=0; b<terowongan[a].size(); b++)
        {
//            cout << mon[terowongan[a][b]] << " ";
            res += (mon[terowongan[a][b] - 1] * multi);
        }
//        cout << res << endl;
        multi++;
    }
    cout << res << endl;
}
