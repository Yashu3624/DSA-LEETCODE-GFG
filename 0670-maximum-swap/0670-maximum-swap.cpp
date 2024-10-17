class Solution {
public:
    int getMax(string s , int i){
        int maxi = i ;
        for(int j = i ; j < s.size() ; j++){
            if(s[maxi]<=s[j]){
                maxi = j ; 
            }
        }
        return maxi ; 
    }
    int maximumSwap(int num) {
        string s = to_string(num) ; 
        string temp = s; 
        for(int i = 0 ; i < s.size() ; i++){
            int str = getMax(s,i) ; 
            swap(s[i],s[str]) ; 
            if(temp!=s)
            break ;
        }
        int number = stoi(s) ; 
        return number ; 

    }
};