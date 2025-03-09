#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int exchange(int n, vector<int>& S){
    int result = 0;
    for (int i=1; i <= n; i++){
        for (int j=i+1; j <= n; j++){
            if (S[i] > S[j]){
                swap(S[i], S[j]);
                result = result + 1;
            }
        }
    }
    return result;
}

int main(){
    int n, count;
    cin >> n;

    vector<int> S(n+1);
    for (int i=1; i <= n; i++){
        cin >> S[i];
    }

    count = exchange(n, S);
    
    for (int i=1; i <= n; i++){
        cout << S[i];
        if (i < n) cout << " ";
    }
    cout << endl;

    cout << count << endl;
}