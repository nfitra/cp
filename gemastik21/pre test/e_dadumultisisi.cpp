#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

void simpleSort(int numbers[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        for (int j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                int temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

int main() {
    int daduA[100],daduV[100], total,n,x,y;
    string A, V;

    getline(cin, A);
    if(A == "")
        return 0;

    getline(cin, V);
    if(V == "")
        return 0;

    total=0;
    stringstream ssA(A);
    stringstream ssV(V);
    while(ssA.good() && ssV.good()){
        ssA >> daduA[total];
        ssV >> daduV[total];
        total++;
    }
    simpleSort(daduA, total);
    simpleSort(daduV, total);

    int scoreA=0, scoreV=0;
    for(int i=0; i<total; i++){
        for(int j=0; j<total; j++){
            if(daduA[i]>daduV[j])
                scoreA += 1;
            if(daduV[i]>daduA[j])
                scoreV += 1;
//            cout << scoreV << " ";
        }
//        cout << endl;
    }

    total = total*total;
    if(scoreA>scoreV)
        x = scoreA;
    else if(scoreA<scoreV)
        x = scoreV;
    else if(scoreA == scoreV)
        x = 0;
    y = total;
//    cout << scoreA << endl;
//    cout << scoreV << endl;
//    cout << x << "/" << y << endl;

    if(!(x==0)){
        for(int a=2; a<total; a++){
//            cout << x << "/" << y << endl;
            if(x%a==0 && y%a==0){
                x = x/a;
                y = y/a;
                a=2;
            }

            if(a>y)
                break;
        }
    }

    if(scoreA>scoreV){
        cout << "Adhi menang dengan peluang " << x << "/" << y << endl;
    }
    else if(scoreA<scoreV){
        cout << "Vijay menang dengan peluang " << x << "/" << y << endl;
    }
    else{
        cout << "Imbang" << endl;
    }
}
