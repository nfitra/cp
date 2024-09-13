#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>
#include <chrono>

using namespace std;
using namespace std::chrono;

int FPB(int a, int b)
{
    int r = 0;
    while(b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int KPK(int a, int b)
{
    return a*b / FPB(a, b);
}

int main()
{
    long long int n;
    cin >> n;

    auto start = high_resolution_clock::now();

//    long long int a,b;
//    while(n--)
//    {
//        cin >> a >> b;
//        long long int res=0;
//        for(long long int x=2; x<=b; x++)
//        {
//            bool out=0;
//            for(long long int y=2; y<=a; y++)
//            {
//                if((x%y==0))
//                    out=1;
//            }
//            if(!out)
//                res++;
//        }
//        cout << res << endl;
//    }

    int a,b;
    int div;
    while(n--)
    {
        cin >> a >> b;
        long long int res=0, sumn=0, sumkpk=0;

        for(int x=2; x<=a; x++)
        {
            int Un=0;
            for(int y=b; y>=2; y--)
            {
                if(y%x==0)
                {
                    Un=y;
                    break;
                }
            }

            int n = (Un) / x;
            sumn += n;
            int Sn = (n/2) * (x+Un);
            cout << x << " " << Un << " " << Sn << " " << sumn << endl;
            if(x>2)
            {
                int divkpk=0;
                for(int y=2; y<=x; y++)
                {
                    if(div == divkpk)
                        break;
                    if(y==x)
                        continue;

                    int kpk = KPK(y, x);

                    cout << "KPK " << y << "," << x << " = " << kpk << endl;

                    if(div == kpk)
                        break;

                    int divn = (Un) / kpk;
                    divkpk = sumn - divn;
                    sumn -= divn;
                    cout << x << " " << Un << " " << sumn << endl;
                }

            }
            div = sumn;
        }

        res = (b-1) - sumn;
        if(abs(a-2) != 0)
        {
            res = (b-1) - (sumn);
        }

        cout << div << " " << sumkpk << endl;
        cout << res << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start) / 1000000;

    cout << "Time taken by function: " << duration.count() << " seconds" << endl;
}
