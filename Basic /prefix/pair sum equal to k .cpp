#include <iostream>
#include <vector>
#include <unordered_set> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    unordered_set<int> seen; 

    for (int i = 0; i < n; i++) {
        int complement = k - A[i]; 
        

        if (seen.find(complement) != seen.end()) {
            cout << "YES" << endl;
            return 0; 
        }

        seen.insert(A[i]); 
    }

    
    cout << "NO" << endl;

 
}
