#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper=0, lower=0;
    for(int x=0; x<s.length(); x++)
    {
        if((char)s[x] >= 65 && (char)s[x] <= 90)
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
//    cout << upper << " " << lower << endl;
    if(upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}
