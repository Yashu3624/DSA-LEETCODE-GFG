class Solution {
    public boolean canConstruct(String s, int k) {
        int strLen = s.length() ; 
        if(strLen<k) return false ; 
        if(strLen==k) return true ; 
        int[] freq = new int[26] ; 
        int odd = 0 ; 
        for(char ch : s.toCharArray()){
            freq[ch-'a'] += 1; 
        }
        for(int cnt : freq){
            if(cnt%2==1) odd++ ;
        }
        return odd<= k ;
    }
}