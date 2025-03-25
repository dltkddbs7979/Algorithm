#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<vector<int> > multiplyMatrix(vector<vector<int> >& S, int n, int k) {  

    if (k == 0) {
        vector<vector<int> > identity(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            identity[i][i] = 1;
        }
        return identity;
    }

    if (k == 1)
        return S;
    else if ( k % 2 == 0){
        vector<vector<int> > B = multiplyMatrix(S, n, k / 2);
        vector<vector<int> > C(n, vector<int>(n, 0)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    C[i][j] += B[i][k] * B[k][j];  
                    C[i][j] %= 1000;
                }
            }
        }
        return C;
    }
    else{
        vector<vector<int> > B = multiplyMatrix(S, n, k / 2);
        vector<vector<int> > C(n, vector<int>(n, 0)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    C[i][j] += B[i][k] * B[k][j];  
                    C[i][j] %= 1000;
                }
            }
        }
        vector<vector<int> > D(n, vector<int>(n, 0)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    D[i][j] += C[i][k] * S[k][j];
                    D[i][j] %= 1000;
                }
            }
        }
        return D;
    }
}


int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int> > S(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> S[i][j];
        }
    }
    vector<vector<int> > result = multiplyMatrix(S, n, k);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == n - 1)
                cout << result[i][j];
            else
                cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
