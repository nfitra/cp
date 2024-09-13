#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    string m;
    cin >> N;

    cin.ignore();
    getline(cin, m);
    if(m == "")
        return 0;

    int arr[10];
    int i = 0;
    stringstream ssin(m);
    while (ssin.good() && i < 10){
        ssin >> arr[i];
        ++i;
    }

    for(int z=0; z<i; z++){

    }


    for(int j = 0; j < i; j++){
        cout << arr[j] << endl;
    }
}
