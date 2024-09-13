#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
//    int num=0;
//    for(int x=0; x<n; x++)
//    {
//        if(s[x] == s[x+1])
//        {
//            num += 1;
//        }
//    }
//    cout << num << endl;

    // otherway
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << n - s.length() << endl;
}
