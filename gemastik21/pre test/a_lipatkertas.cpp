#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, P, Q, M;
    cin >> N;
    for (int x=0; x<N; x++) {
        cin >> P;
        cin >> Q;
        cin >> M;

        for(int y=0; y<M; y++){
            if(P > Q) {
                P = P/2;
            }
            else {
                Q = Q/2;
            }
            if(y==M-1){
                if(P>Q){
                    cout << P << " " << Q << endl;
                }
                else{
                    cout << Q << " " << P << endl;
                }
            }
        }
    }
}
