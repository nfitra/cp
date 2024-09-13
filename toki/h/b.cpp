#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x,i,j,k;
        char c;

        cin >> x >> c;
        if (x <= 0)
        {
            cout << "Error" << endl;
        }

        for(i=1; i<=x; i++)
        {

            for(j=1; j<=x-i; j++)
            {
                cout << " ";
            }

            for(k=1; k<=i; k++)
            {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}
