#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long int M;

    cin >> N;
    if(!(2 <= N && N <= 100))
        return 0;
    long long int x[N], y[N], counts, max, l;
    for(int i=0; i<N; i++){
        cin >> M;

        x[i] = 0;
        y[i] = 0;
        if(!(0 <= M && M <= 100000))
            break;
        max=1;
        counts=0;
        l=1;
        for(int j=1; j<M+1; j++){
            for(int k=0; k<max; k++){
                if(l%4==0){
                    y[i] -= 1;
                }
                else if(l%3==0){
                    x[i] -= 1;
                }
                else if(l%2==0){
                    y[i] += 1;
                }
                else {
                    x[i] += 1;
                }
                counts +=1;
                if(counts == M)
                    break;
            }
            max +=1;
            if(l==5)
                l=1;
            else
                l+=1;
            if(counts == M)
                break;
        }
    }

    for(int i=0; i<N; i++){
        cout << x[i] << " " << y[i] << endl;
    }
}
