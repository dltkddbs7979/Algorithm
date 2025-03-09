#include <iostream>
#include <vector>

using namespace std;

void seqsearch(int n, int S[], int x, int &location);

int main(){
    int n, m, location;
    cin >> n >> m;  
    
    vector<int> S(n+1);
    for(int i = 1; i <= n; i++) 
        cin >> S[i];
    
    int *pS = &S[0];
    for(int i = 0; i < m; i++) { 
        int x;
        cin >> x;
        seqsearch(n, pS, x, location);
        if(location != 0) {
            cout << x << " is in " << location << "." << endl;
        } else {
            cout << x << " is not in S." << endl;
        }
    }
    return 0;
}

void seqsearch(int n, int S[], int x, int &location){
    location = 1;
    while(location <= n && S[location] != x)
        location++;
    if(location > n)
        location = 0;
}
