class Solution {
public:
    int lengthOfLastWord(string s) {
            istringstream iss(s);

     string lastword ; 
     while(iss>>lastword) {

     } 
     return lastword.size();  
    }
};