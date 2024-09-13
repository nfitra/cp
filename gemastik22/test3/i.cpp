#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string s1, s2;
    cin >> s1 >> s2;

    char temp;
    int lastindex=0, sum=0;
    for(int w=0; w<N; w++)
    {
        int changed=0;
        for(int x=lastindex; x<N; x++)
        {

            if(s1[x] > s2[x])
            {
                changed=1;
                temp = s1[x];
                s1[x] = s2[x];
                s2[x] = temp;
            }
            else
            {
                if(changed)
                {
//                    temp = s1[x];
//                    s1[x] = s2[x];
//                    s2[x] = temp;
                    lastindex=x;
                    sum++;
//                    cout << sum << endl;
//                    cout << s1 << endl << s2 << endl;
                    break;
                }
            }
            if(x==N-1)
            {
                if(!changed)
                {
                    break;
                }
                lastindex=x;
                sum++;
                break;
            }

        }
//        cout << "li: " << lastindex  << " " << N << endl;
        if(lastindex == N-1)
            break;
    }
    if(sum < 2)
        cout << "0" << endl;
    else
        cout << sum << endl;
}
