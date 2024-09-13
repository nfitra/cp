#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string a,b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    cout << strcmp(a.c_str(), b.c_str()) << endl;
}
