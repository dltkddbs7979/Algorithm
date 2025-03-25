#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int binsearch2(int low, int high,int x, vector<int> S, int &cnt) {
    int mid;
    cnt++;
    if (low > high)
        return 0;
    else {
        mid = (low + high) /2; //low 는 1부터 시작해야함
        if (x == S[mid])
            return mid;
        else if (x < S[mid])
            return binsearch2(low, mid-1, x, S, cnt);
        else // x > S[mid]
            return binsearch2(mid+1, high, x, S, cnt);
    }
}

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;

    vector<int> S(n + 1);  

    for (int i = 1; i <= n; i++) { 
        cin >> S[i];
    }

    sort(S.begin() + 1, S.begin() + n + 1);  
    for (int i =0; i < m; i++){
        int x;
        cin >> x;
        cnt = 0;
        x = binsearch2(1, n, x, S, cnt);
        cout << cnt << " " << x;
        if (i < m - 1)
            cout << endl;
    }
    return 0;
}
