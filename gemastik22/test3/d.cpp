#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

struct number
{
    long long int number;
    long long int countnum;
};

int main()
{
    long long int N;
    cin >> N;

    long long int A[N];
    for(long long int  x=0; x<N; x++)
    {
        cin >> A[x];
    }

    long long int cans[N], temp;
    temp = A[0];
    sort(A, A + sizeof(A) / sizeof(A[0]));

    for(int x=0; x<N; x++)
    {
//        cout << A[x] << " ";
    }

//    cout << endl;
    long long int countnum=1, maxnum=1, minnum=1000000000;
    long long int maxarr[N], head=0;

    for(long long int  x=1; x<N; x++)
    {
        if(temp == A[x])
        {
            countnum++;
            if(maxnum < countnum)
                maxnum = countnum;
        }
        else
        {
            if(minnum > maxnum)
                minnum = maxnum;
            maxarr[head] = maxnum;
            temp = A[x];
            countnum=1;
            head++;
        }
        if(x==N-1)
        {
            if(minnum > maxnum)
                minnum = maxnum;
        }

//        cout << minnum << " " << countnum << " " << maxnum << endl;
    }

    for(int x=1; x<=N; x++)
    {
        if(x<=minnum)
        {
            cout << "0 ";
        }
        else
        {
            temp = A[0];
            countnum=1;
            int countchanges=0;
            for(int y=1; y<N; y++)
            {
                if(temp == A[y])
                {
                    countnum++;
                    continue;
                }

                if(y>minnum)
                {
                    A[y] = temp;
                    countnum++;
                    countchanges++;
                    if(countnum == 5)
                    {
                        cout << countchanges << " ";
                        temp = A[y+1];
                        countnum=1;
                        break;
                    }

                }
//                cout << countnum << endl;
            }
        }
    }
}
