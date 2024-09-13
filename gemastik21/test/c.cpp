#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>
#include <limits>

using namespace std;

struct terowongan
{
    int a;
    int b;
};

int main()
{
    int N, K;
    cin >> N >> K;

    int sarang[N];
    for(int x=0; x<N; x++)
    {
        cin >> sarang[x];
    }

    int t[100000][100000], maxt=0;
    for(int x=0; x<K; x++)
    {
        int a, b;
        cin >> a >> b;

        if(x==0)
        {
            if(a < b)
            {
                t[maxt] = {a,b}
            }
            else
            {
                tx[x].a = b;
                tx[x].b = a;
            }
        }
        else
        {
            if(a < b)
            {
                tx[x].a = a;
                tx[x].b = b;
            }
            else
            {
                tx[x].a = b;
                tx[x].b = a;
            }
        }

//        cin >> tx[x].a >> tx[x].b;
    }

    int arr[100000]
    for(int x=0; x<K; x++)
    {
        for(int y=0; y<K; y++)
        {

        }
    }
}
