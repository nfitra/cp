#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len=s.length();
    char pick[len];
    int pick_p=0;
//    for(int x=0; x<len; x++)
//    {
//        if(pick_p==0)
//        {
//            pick[pick_p++] = s[x];
//        }
//        else
//        {
//            for(int y=0; y<pick_p; y++)
//            {
//                if(s[x] == pick[y])
//                {
//                    break;
//                }
//                if(y == pick_p-1)
//                {
//                    pick[pick_p++] = s[x];
//                }
//            }
//        }
//    }

//    for(int x=0; x<pick_p; x++)
//    {
//        cout << pick[x];
//    }
//    cout << endl;
//    cout << pick_p << endl;
//
//    if(pick_p %2 == 0)
//    {
//        cout << "CHAT WITH HER!" << endl;
//    }
//    else
//    {
//        cout << "IGNORE HIM!" << endl;
//    }

    // otherway
//    sort(s.begin(), s.end());
    s = unique(s.begin(), s.end());
//    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s << endl;
    if (s.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
