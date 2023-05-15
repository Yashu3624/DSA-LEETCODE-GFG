class Solution {
public:
    int romanToInt(string s) {
        int total = 0 ;
        unordered_map<char,int>res{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
            for(int i = 0 ; i < s.size() ; i++){
                if(res[s[i]] < res[s[i+1]]){
                    total -= res[s[i]];
                }
                else{
                    total += res[s[i]];
                }
            }
            return total;
    }
};