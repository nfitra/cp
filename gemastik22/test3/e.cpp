#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct bomb
{
    int x, y;
};

int main()
{
    int bomx, bomy;
    cin >> bomx >> bomy;

    int N;
    cin >> N;
    bomb b[N];
    double jarakbomb[N];
    for(int x=0; x<N; x++)
    {
        cin >> b[x].x >> b[x].y;
        jarakbomb[x] = sqrt(pow(b[x].x - bomx,2) + pow(b[x].y - bomy,2));
    }

    int Q;
    cin >> Q;

    sort(jarakbomb, jarakbomb + sizeof(jarakbomb) / sizeof(jarakbomb[0]));

    int rbomb[Q], hasilbomb[Q]= {0};
    for(int x=0; x<Q; x++)
    {
        cin >> rbomb[x];
    }

    int lastsum = 0, lastindex=0;
    for(int x=0; x<Q; x++)
    {
        hasilbomb[x] = lastsum;
        for(int y=lastindex; y<N; y++)
        {
            if(jarakbomb[y] <= rbomb[x])
            {
                hasilbomb[x]++;
            }
            else
            {
                break;
            }
        }
        cout << hasilbomb[x] << endl;
    }
}
