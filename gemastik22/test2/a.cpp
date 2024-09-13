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

struct titik
{
    int x;
    int y;
};

int main()
{
    int x,y;
    cin >> x >> y;
    char mat[x][y]= {'0'}, inp[100];
    bool found=0, topSeal=1, botSeal=1, leftSeal=1, rightSeal=1, midSeal=1;
    titik t, c, d, top, bot, left, right;

    cin.ignore();
    for(int a=0; a<x; a++)
    {
        cin.getline(inp, 100);
        for(int b=0; b<y; b++)
        {
            mat[a][b] = inp[b];
        }
    }

    for(int a=0; a<x; a++)
    {
        for(int b=0; b<y; b++)
        {
            if(a==0 && mat[a][b] == ' ')
            {
                topSeal=0;
                top.x=a;
                top.y=b;
            }
            if(a==x-1 && mat[a][b] == ' ')
            {
                botSeal=0;
                bot.x=a;
                bot.y=a;
            }
            if(b==0 && mat[a][b] == ' ')
            {
                leftSeal=0;
                left.x=a;
                left.y=b;
            }
            if(b==y-1 && mat[a][b] == ' ')
            {
                rightSeal=0;
                right.x=a;
                right.y=b;
            }

            if(mat[a][b] == 'C' || mat[a][b] == 'D' && !found)
            {
                found = 1;
                t.x = a;
                t.y = b;
            }
            if(mat[a][b] == 'C')
            {
                c.x=a;
                c.y=b;
            }
            if(mat[a][b] == 'D')
            {
                d.x=a;
                d.y=b;
            }
        }
    }

    cout << topSeal << " " << botSeal << " " << leftSeal << " " << rightSeal << endl;



//    for(int a=0; a<x; a++)
//    {
//        for(int b=0; b<y; b++)
//        {
//            cout << mat[a][b];
//        }
//        cout << endl;
//    }
}
