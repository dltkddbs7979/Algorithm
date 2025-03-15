#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int collatz(int n) {
    cout << n << endl;
    if (n == 1){
        return 1;
    }
    else{
        if (n % 2 == 0){
            return collatz(n / 2);
        }
        else{
            return collatz(3 * n + 1);
        }
    }
}

int main(){
    int n;
    cin >> n;
    collatz(n);
    return 0;
}
    
