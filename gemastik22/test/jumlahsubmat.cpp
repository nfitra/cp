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
    long long int x,y,z;
    cin >> x >> y >> z;
    long long int mat[x][y];
    for(long long int a=0; a<x; a++)
    {
        for(long long int b=0; b<y; b++)
        {
            cin >> mat[a][b];
        }
    }

    long long int x1,y1,x2,y2,sum=0;
    for(long long int a=0; a<z; a++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        sum = 0;
//        cout << x1 << y1 << x2 << y2;
        for(long long int b=x1-1; b<x2; b++)
        {
            for(long long int c=y1-1; c<y2; c++)
            {
//                cout << mat[b][c] << " ";
                sum += mat[b][c];
            }
//            cout << endl;
        }
        cout << sum << endl;
    }

//    long long int submat[z][2][2];
//    for(int a=0; a<z; a++)
//    {
//        cin >> submat[a][0][0] >> submat[a][0][1] >> submat[a][1][0] >> submat[a][1][1];
//    }

//    for(int a=0; a<z; a++)
//    {
//        for(int b=0; b<2; b++)
//        {
//            for(int c=0; c<2; c++)
//            {
//                cout << submat[a][b][c] << " ";
//            }
//        }
//        cout << endl;
//    }
}
