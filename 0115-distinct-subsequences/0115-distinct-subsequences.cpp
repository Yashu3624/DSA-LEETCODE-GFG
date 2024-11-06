class Solution {
public:
    int solve(int i , int j , int n , int m , string s , string t){
        if(j==m) return 1 ;
        if(i==n) return 0 ; 
        if(s[i]==t[j]){
            return solve(i+1,j+1 , n , m , s , t) + solve(i+1,j,n,m,s,t);
        }
        else{
            return solve(i+1 , j , n , m , s , t) ;
        }
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size() ; 
        return solve(0 , 0 , n , m , s , t ) ; 
    }
};