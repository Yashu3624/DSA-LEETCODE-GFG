class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0 ; i < command.size() ; i++){
            if(command[i]=='G'){
                ans.push_back(command[i]);
            }
            else if(command[i]=='('&& command[i+1]==')'){
                ans.push_back('o');
            }
            else if(command[i]=='a' && command[i+1]=='l'){
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        return ans;
    }
};