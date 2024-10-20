#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissing(int a[], int b[], int n, int m) {
    vector<int> result; 

    for (int i = 0; i < n; i++) {
        bool found = false;

     
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = true; 
                break;       
            }
        }

       
        if (!found) {
            result.push_back(a[i]);
        }
    }

    return result; 
}

int main() {
    int n, m;
    cin >> n >> m; 

    vector<int> a(n);
    vector<int> b(m); 

    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

  
    vector<int> missing_elements = findMissing(a.data(), b.data(), n, m);

   
    for (int num : missing_elements) {
        cout << num << " "; 
    }

    return 0;
}
