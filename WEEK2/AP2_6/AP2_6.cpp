#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int collatz(int n, vector<int> &v) {
    v.push_back(n);
    if (n == 1){
        return 1;
    }
    else{
        if (n % 2 == 0){
            return collatz(n / 2, v);
        }
        else{
            return collatz(3 * n + 1, v);
        }
    }
}

int main(){
    int n, m, l =0;
    vector< vector<int> > v;
    vector<int> result;
    cin >> n >> m;
    
    v.resize(m - n + 1);
    
    for(int i = n; i <= m; i++){
        collatz(i, v[l]);
        l++;
    }   
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() > result.size()){
            result = v[i];
        }
    }
    cout << result[0] << " " << result.size() << endl;
    for(int i = 0; i < result.size() - 1; i++){
        cout << result[i] << " ";
    }
    cout << result[result.size() - 1] << endl;

    return 0;
}
    
