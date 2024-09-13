#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, M, Q;
    string b1;

    getline(cin, b1);
    if(b1 == "")
        return 0;

    int i = 0;
    stringstream ssin(b1);
    while (ssin.good() && i < 3){
        if (i == 0)
            ssin >> N;
        else if(i == 1)
            ssin >> M;
        else
            ssin >> Q;
        i++;
    }
//    cout << N << endl;
//    cout << M << endl;
//    cout << Q << endl;

    string b2;
    long long int matriks[N][M];
    for(int x=0; x<N; x++){
        getline(cin, b2);
        stringstream m(b2);
        for(int y=0; y<M; y++){
            m >> matriks[x][y];
        }
    }

    string b3;
    long long int x1[Q],y1[Q],x2[Q],y2[Q],totalsm[Q];
    for(int x=0; x<Q; x++){
        getline(cin, b3);
        stringstream sm(b3);
        for(int y=0; y<4; y++){
            if(y==0)
                sm >> x1[x];
            else if(y==1)
                sm >> y1[x];
            else if(y==2)
                sm >> x2[x];
            else
                sm >> y2[x];
        }

//        cout << x1[x] << " " << y1[x] << " " << x2[x] << " " << y2[x] << endl;

        totalsm[x] = 0;
        for(int i=x1[x]-1; i<x2[x]; i++){
            for(int j=y1[x]-1; j<y2[x]; j++){
                totalsm[x] += matriks[i][j];
//                cout << matriks[i][j] << endl;
            }
        }
    }

    for(int x=0; x<Q; x++){
        cout << totalsm[x] << endl;
    }
}
