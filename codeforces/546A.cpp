#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost=0;
    for(int i=1; i<=w; i++)
    {
        cost += i*k;
    }
    cost -= n;
    if(cost < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << cost << endl;
    }
}
