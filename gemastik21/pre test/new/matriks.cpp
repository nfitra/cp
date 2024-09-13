#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    int mat[n][m];
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<m; y++)
        {
            cin >> mat[x][y];
        }
    }

    for(int a=0; a<q; a++)
    {
        int x1, x2, y1, y2, sum=0;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int x=x1-1; x<=x2-1; x++)
        {
            for(int y=y1-1; y<=y2-1; y++)
            {
                sum+= mat[x][y];
            }
        }
        cout << sum << endl;
    }

}
