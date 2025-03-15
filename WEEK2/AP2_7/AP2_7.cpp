#include <iostream>
#include <cmath>

using namespace std;


void hanoi(int n, char src, char via, char dst, int dot, int &count, int &total_count){
    total_count = total_count + 1;
    if (n == 0){
        return;
    }
    else if (n == 1){
            count = count + 1;
            if (count == dot){
            cout << src << " -> "<< dst <<endl;
        }
        return;
    }
    else{
        hanoi(n-1, src, dst, via, dot, count, total_count);
        hanoi(1, src, via, dst, dot, count, total_count);
        hanoi(n-1, via, src, dst, dot, count, total_count);    
    }
}

int main(){
    int n, k, count = 0, total_count = 0;
    cin >> n >> k;
    hanoi(n, 'A', 'B', 'C', k, count, total_count);
    cout << total_count << endl;
}
