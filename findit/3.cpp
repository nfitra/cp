#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[100];
        int x=0;
        int loop = 100;
        while (loop--)
        {
            cin >> arr[x];

            if (cin.peek() == '\n')
                break;
            x++;
        }
        int lenArr = x+1;
        int sum=0;
        int checked[lenArr];
        for(int x=0; x<lenArr; x++)
        {
            int arah = 0;
            int nA = arr[x];
            if(checked[x] == 1)
                continue;
            for(int y=x+1; y<lenArr; y++)
            {
                if(nA-1 == arr[y] && arah == 0)
                {
                    arah = 1;
                }
                else if(nA+1 == arr[y] && arah == 0)
                {
                    arah = 2;
                }
                if(nA-1 == arr[y] && arah == 1)
                {
                    checked[y] = 1;
                    nA = arr[y];
                }
                else if (nA+1 == arr[y] && arah == 2)
                {
                    checked[y] = 1;
                    nA = arr[y];
                }
            }
            sum += 1;
        }
        cout << sum << endl;
    }
    exit(0);
}
