#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int Min,Max;
    long long int A,B,C;
    string b1, b2;

    getline(cin, b1);
    if(b1 == "")
        return 0;

    getline(cin, b2);
    if(b2 == "")
        return 0;

    stringstream ssb1(b1);
    for(int x=0; x<3; x++){
        if (x == 0)
            ssb1 >> Min;
        else
            ssb1 >> Max;
    }

    int i = 0;
    stringstream ssb2(b2);
    for(int y=0; y<3; y++){
        if (y == 0)
            ssb2 >> A;
        else if (y == 1)
            ssb2 >> B;
        else
            ssb2 >> C;
    }

    int total=0;
    for(int x=Min; x<=Max; x++){
        bool checkA=false, checkB=false, checkC=false;
        if(x%A==0){
            total +=1;
            checkA = true;
        }
        if(x%B==0){
            if(checkA == true){
                total -=1;
                continue;
            }
            total +=1;
            checkB = true;
        }
        if(x%C==0){
            if(checkA == true || checkB == true){
                total -=1;
                continue;
            }
            total +=1;
        }
    }
    cout << total << endl;
}
