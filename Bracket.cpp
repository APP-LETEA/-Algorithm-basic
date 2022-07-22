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

        for(char bracket_count : input){
            if (bracket_count == '('){
                Bracket.push(bracket_count);
            }
            else{
                // if(Bracket.empty()){
                //     break;
                // }
                Bracket.pop();
            }
        }
            if (!Bracket.empty()){
            cout << "NO" << '\n';
           }
            else{
         cout << "Yes" << endl;
    }

        
    }


    return 0;
}