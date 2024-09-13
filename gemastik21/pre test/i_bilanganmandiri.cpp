#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long int A[N], B[N];
    long long int totalbm[N];
    for(int x=0; x<N; x++){
        cin >> A[x] >> B[x];
        totalbm[x] = 0;
        for(int y=2; y<B[x]; y++){
            if(!(y%2==0) && (!(y%A[x]==0))){
                totalbm[x] += 1;
            }
        }
    }

    for(int x=0; x<N; x++){
        cout << totalbm[x] << endl;
    }

    return 0;
}
