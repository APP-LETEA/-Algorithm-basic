#include <iostream>
#include <stack>
#include <string>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    string ans;
    stack<int> st;
    int m = 0;
    bool det = true;

    while (num--) {
        int sequence_number;
        cin >> sequence_number;
        if (sequence_number > m) {
            while (sequence_number > m) {
                m++;
                st.push(m);
                ans += '+';
            }
            st.pop();
            ans += '-';
        }
        else {
            bool check = false;
            if (!st.empty()) {
                int top = st.top();
                st.pop();
                ans += '-';
                if (sequence_number == top) {
                    check = true;
                }
            }
            if (!check) {
                det = false;
            }
        }


    }
    if(!det){
    cout << "NO" << '\n';
    return 0;
    }

    for (auto j : ans) {
        cout << j << '\n';
    }
    return 0;
}