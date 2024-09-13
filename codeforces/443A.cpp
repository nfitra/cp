#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define sz(s) sizeof(s)/sizeof(s[0])
#define strall(s) s.begin(),s.end()

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> st;
    for(int x=0; x<s.size(); x++)
    {
        if(s[x] == '{' || s[x] == '}' || s[x] == ',' || s[x] == ' ')
            continue;
        st.insert(s[x]);
    }
    cout << st.size() << endl;
}

