#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int y=0; y<x; y++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int fin = 0;
        if (a < b)
            fin++;
        if(a < c)
            fin++;
        if (a < d)
            fin++;
        cout << fin << endl;
    }
}
