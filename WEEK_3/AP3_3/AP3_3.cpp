#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void partition(int low, int high, int &pivotpoint, vector<int>& S, int &cnt){
    int pivotitem;

    pivotitem = S[low];
    int j = low;
    for(int i = low + 1; i <= high; i++){
        if(S[i] < pivotitem){
            j++;
            swap(S[i], S[j]);
            cnt++;
        }
    }
    pivotpoint = j;
    swap(S[low], S[pivotpoint]);
    cnt++;
}

void quicksort(int low, int high, vector<int>& S, int &cnt){
    int pivotpoint;
    if(low < high){
        partition(low, high, pivotpoint, S, cnt);
        quicksort(low, pivotpoint - 1, S, cnt);
        quicksort(pivotpoint + 1, high, S, cnt);
    }
}

int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> S(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> S[i];
    }

    quicksort(1, n, S, cnt);

    for (int i = 1; i <= n; i++) {
        if (i == n)
            cout << S[i];
        else
            cout << S[i] << " ";
    }
    cout << endl << cnt <<endl;

    return 0;
}
