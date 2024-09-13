#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int o, m, n;
    while(x--)
    {
        int a, b, c=0, d=0, sum=0;
        cin >> o >> m >> n;
        a = o - 2;
        b = m * n;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(i == 1)
                {
                    if (j == 1)
                    {
                        c += 4;
                        d += 4 * a;
                    }
                    else if (j > 1)
                    {
                        c += 2;
                        d += 3 * a;
                    }
                }
                else
                {
                    if (j == 1)
                    {
                        c += 2;
                        d += 3 * a;
                    }
                    else if (j > 1)
                    {
                        c += 1;
                        d += 2 * a;
                    }
                }

            }
        }

        sum = c + d;
        cout << sum << endl;
    }
}
