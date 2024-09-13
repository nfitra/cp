#include <iostream>
#include <unistd.h>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], maxnum=0, minnum=INT_MAX;
    for(int x=0; x<n; x++)
    {
        cin >> a[x];
        if(maxnum < a[x])
            maxnum = a[x];
        if(minnum > a[x])
            minnum = a[x];
    }

    int res=0;
    if(a[0] != maxnum)
    {
        while(1)
        {
            bool done=0;
            for(int x=0; x<n-1; x++)
            {

                if(a[x+1] == maxnum)
                {
                    res++;
                    swap(a[x+1], a[x]);

                    if(a[0] == maxnum)
                        done=1;
                    break;
                }
            }
            if(done)
                break;
        }
    }

    if(a[n-1] != minnum)
    {
        while(1)
        {
            bool done=0;
            for(int x=n-1; x>0; x--)
            {

                if(a[x-1] == minnum)
                {
                    res++;
                    swap(a[x-1], a[x]);

                    if(a[n-1] == minnum)
                        done=1;
                    break;
                }
            }
            if(done)
                break;
        }
    }
    cout << res << endl;
}
