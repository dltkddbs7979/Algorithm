#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binsearch(int n, int* S, int x, int& location){
    int low, high, mid;
    low = 1; high = n;
    location = 0;
    while (low <= high && location == 0){
        mid = (low + high) / 2;
        if (x == S[mid]){
            location = mid;
        }
        else if (x < S[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
}

int main() {
    int n, m, location;
    cin >> n >> m;

    int S[n+1];  

    for(int i = 1; i <= n; i++) 
        cin >> S[i];
    
    sort(S+1, S+n+1);  
    
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        binsearch(n, S, x, location);
        if (location != 0) {
            cout << x << " is in " << location << "." << endl;
        }
        else {
            cout << x << " is not in S." << endl;
        }
    }
    return 0;
}


