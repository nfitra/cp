#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x--) {
        string str;
        cin >> str;

        char s[7];
        strcpy(s, str.c_str());

        int suml=0, sumr=0;
        for(int i=0; i<6; i++) {
            if(i < 3) {
                suml += s[i];
            }
            else {
                sumr += s[i];
            }
        }
        if(suml == sumr) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

