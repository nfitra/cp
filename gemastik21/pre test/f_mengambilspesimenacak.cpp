#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100];
    string b1;

    getline(cin, b1);
    if(b1 == "")
        return 0;

    int x=0;
    stringstream ssb1(b1);
    while(ssb1.good()){
        ssb1 >> a[x];
        cout << a[x] << endl;
        x++;
    }
}
