#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>> s;

    int jmlh = 0;
    for(int i=0; i<s.length() + 1; i++)
    {
        if(s[i] == '.')
            cout << '0';
        else if (s[i] == '-' && s[i+1] == '.') {
            cout << '1';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-') {
            cout << '2';
            i++;
        }
    }
}

