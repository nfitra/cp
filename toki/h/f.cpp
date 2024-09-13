#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long int x,i,j,k;
        char c;

        cin >> x >> c;
        if (x < 2)
        {
            cout << "Error" << endl;
            continue;
        }

        for(i=1; i<=x; i++)
        {

            for(j=1; j<=x-i; j++)
            {
                cout << " ";
            }

            for(k=1; k<i*2; k++)
            {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}
