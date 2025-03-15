#include <iostream>
#include <cmath> 

using namespace std;

typedef long long long_t;

long_t fun(long_t n, long_t m, long_t p) {
    return ((n+1) / 2) * (log2(m) + 2) * (log2(4 * p) + 1);
}

int main(){
    long_t n, m, p;
    cin >> n >> m >> p;
    cout << fun(n, m, p) << endl;
    return 0;
}
