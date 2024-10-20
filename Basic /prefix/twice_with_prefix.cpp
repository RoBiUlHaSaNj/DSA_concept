#include <bits/stdc++.h>
using namespace std;

string can_form_double_string(const string &s) {
   
    vector<int> frequency(26, 0);

    for (char c : s) {
        frequency[c - 'a']++;
    }


    for (int count : frequency) {
        if (count >= 2) {
            return "Yes";  
        }
    }

    return "No";  
}

int main() {
    int T;
    cin >> T;
    vector<string> results;

   
    for (int i = 0; i < T; ++i) {
        string S;
        cin >> S; 
        results.push_back(can_form_double_string(S));
    }

    
    for (const string &res : results) {
        cout << res << endl;
    }


}
