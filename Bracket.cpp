#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int repeat_count;
    cin >> repeat_count;
    cin.ignore();
    while(repeat_count--){
        string input;
        getline(cin,input);
        // input += '\n';
        stack<char> Bracket;
        string answer = "YES";

        for(int i = 0; i < input.size(); i++){
            if (input[i] == '('){
                Bracket.push(i);
            }
            else if (input[i] == ')' && !Bracket.empty()){
                
                Bracket.pop();
            }
            else {
                answer = "NO";
                break;
            }

        }
            if(!Bracket.empty()) {
                answer = "NO";
            }

            cout << answer << endl;

        
    }


    return 0;
}