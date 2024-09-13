#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int P, V, T;
    int prob=0, tot;
    while(n--)
    {
        cin >> P >> V >> T;
        tot = P + V + T;
        if(tot > 1)
        {
            prob += 1;
        }
    }
    cout << prob;
}
