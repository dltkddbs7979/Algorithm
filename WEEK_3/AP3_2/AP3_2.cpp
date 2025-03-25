#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void merge(int h, int m, vector<int> U, vector<int> V, vector<int>& S, int &cnt) {
    cnt++;
    int i = 1, j = 1, k = 1;
    while (i <= h && j <= m) {
        S[k++] = (U[i] < V[j]) ? U[i++] : V[j++];
    }
    if (i > h)
        while (j <= m)
            S[k++] = V[j++];
    else
        while (i <= h)
            S[k++] = U[i++];
}

void mergesort(int n, vector<int>& S, int &cnt) {
    if (n > 1) {
        int h = n / 2, m = n - h;
        vector<int> U(h + 1), V(m + 1);

        for (int i = 1; i <= h; i++)
            U[i] = S[i];
        for (int i = h + 1; i <= n; i++)
            V[i - h] = S[i];
        mergesort(h, U, cnt);
        mergesort(m, V, cnt);
        merge(h, m, U, V, S, cnt);
    }
}

void merge2(int low, int mid, int high, vector<int>& S, int &cnt) {
    cnt++;
    vector<int> U(high - low + 1);
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        U[k++] = (S[i] < S[j]) ? S[i++] : S[j++];
    }
    if (i > mid)
        while (j <= high)
            U[k++] = S[j++];
    else
        while (i <= mid)
            U[k++] = S[i++];
    for (int t = low; t <= high; t++)
        S[t] = U[t - low];
}

void mergesort2(int low, int high, vector<int>& S, int &cnt) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort2(low, mid, S, cnt);
        mergesort2(mid + 1, high, S, cnt);
        merge2(low, mid, high, S, cnt);
    }
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    vector<int> S(n+1);  
    S[0] = -1;

    for (int i = 1; i <= n; i++) {
        cin >> S[i];  
    }

    mergesort2(1, n, S, cnt);

    for (int i = 1; i <= n; i++) {
        if (i == n)
            cout << S[i];
        else
            cout << S[i] << " ";
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}
