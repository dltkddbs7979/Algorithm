#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long long_t;


long_t fun(long_t n) {
    if (n == 0)
        return 1;
    int m = int(log(n) / log(4));  
    return pow(8, m + 1);
}

int main(){
    long_t n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
