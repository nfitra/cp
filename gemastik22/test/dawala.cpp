#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <math.h>
#include <conio.h>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s1[n], s2[n];
    long long int res[n];
    for(int a=0; a<n; a++)
    {

        long long int x1,x2,y1,y2,z1,z2;

        cin >> s1[a] >> x1 >> y1 >> z1;
        cin >> s2[a] >> x2 >> y2 >> z2;

        long long int xcor, ycor;
        xcor = abs(x1-x2);
        ycor = abs(y1-y2);

        res[a] = sqrt(pow(xcor,2) + pow(ycor,2));
    }

    long long int order[n];
    copy(res, res+n,order);
    sort(order, order + n, greater<int>());
    for(int a=0; a<n; a++)
    {
        for(int b=0; b<n; b++)
        {
            if(order[a] == res[b])
            {
                cout << s1[b] << " " << s2[b] << " " << res[b] << endl;
                break;
            }
        }
    }
}
