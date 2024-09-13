#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,l;

    cin >> p;
    cin >> l;

    char peta[p][l], inp[100];
    cin.ignore();

    for(int x=0; x<p; x++){
        cin.getline(inp, 100);
        for(int y=0; y<l; y++){
            peta[x][y] = inp[y];
        }
    }

    char check1[100];
    int Cx,Cy, Dx,Dy;
    bool x_barricade[p];
    bool topSealed=true, bottomSealed=true, leftSealed=true, rightSealed=true;
    cout << endl;
    for(int x=0; x<p; x++){
        x_barricade[x] = true;
        for(int y=0; y<l; y++){
            if(x==0){
                if(peta[x][y] == ' ')
                    topSealed = false;
            }
            else if(x==p-1){
                if(peta[x][y] == ' ')
                    bottomSealed = false;
            }

            if(y==0){
                if(peta[x][y] == ' ')
                    leftSealed = false;
            }
            else if(y==l-1){
                if(peta[x][y] == ' ')
                    rightSealed = false;
            }

            if(peta[x][y] == ' ')
                x_barricade[x] = false;

            if(peta[x][y] == 'x' || peta[x+1][y] == 'x')

            if(peta[x][y] == 'C'){
                Cx = x;
                Cy = y;
            }
            else if(peta[x][y] == 'D'){
                Dx = x;
                Dy = y;
            }
//            cout << peta[x][y];
        }
//        cout << endl;
    }

    cout << Cx << "," << Cy << endl;
    cout << Dx << "," << Dy << endl;


    string output1 = "Dawala bertemu Cepot";
    for(int x=0; x<p; x++){
//        if(x_barricade[x] == true)
//            cout << string(l,'x');
        if(x >= Cx && x <= Dx && x_barricade[x] == true){
            output1 = "Dawala tidak bertemu Cepot";
            break;
        }
    }

//    if(Cx <= Dx && x_barricade[x] == false){
//            output1 = "Dawala bertemu Cepot";
//    }
    cout << output1 << endl;
    if(leftSealed==true && rightSealed==true && bottomSealed==true && topSealed==true){
        cout << "tidak ada jalan Cepot lumpat" << endl;
    }
    else{
        cout << "ada jalan Cepot lumpat" << endl;
    }
}
