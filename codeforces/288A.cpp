#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[4], num=0;
    bool same=0;
    for(int x=0; x<4; x++)
    {
        cin >> a[x];
        same = 0;
        for(int y=0; y<x; y++)
        {
            if(a[x] == a[y])
            {
                same = 1;
                break;
            }
        }
        if(same == 1)
        {
            num++;
        }
    }
    cout << num << endl;
}
