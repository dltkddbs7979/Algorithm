#include <iostream>
#include <vector>

using namespace std;
typedef unsigned long long LongInt;

LongInt fib(LongInt n, int& count){
    count++;
    if (n<=1)
        return n;
    else
        return fib(n-1, count) + fib(n-2, count);
}

int main(){
    int count = 0;
    LongInt n, result;
    cin >> n;
    result = fib(n, count);
    if (count < 1000000)
        cout << result << endl;
    else
        cout << result % 1000000 << endl;
    cout << count << endl;
}