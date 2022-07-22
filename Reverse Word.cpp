#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_case;
    cin >> test_case;

    cin.ignore();

    while (test_case--){
        string input;
        getline(cin,input);
        input += '\n';
        stack<char> st;
        for (char word_count : input){
            if (word_count == ' ' || word_count == '\n'){
                while (!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << word_count;
            }
            else{
                st.push(word_count);
            }
        }

    }
    return 0;


}