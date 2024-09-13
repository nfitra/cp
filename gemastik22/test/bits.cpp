#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>
#include <climits>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int h[n];
    for(int x=0; x<n; x++)
    {
        cin >> h[x];
    }

    long long int sum=0;
    for(int x=1; x<n; x++)
    {
        sum += max(0ll, h[x] - h[x-1]);
    }
    cout << sum << endl;
}
