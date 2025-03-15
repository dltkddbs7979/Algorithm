#include <iostream>
#include <cmath>

using namespace std;

typedef long long long_t;

long_t fun(long_t n) {
    if (n == 0){
        return 1;
    }
    else if(n ==1){
        return 4;
    }
    else{
        if (n % 2 == 0){
            return 4 * pow(n, 2);
        }
        else{
            return 4 * pow(n-1, 2);
        }
    }
}

int main() {
    long_t n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
