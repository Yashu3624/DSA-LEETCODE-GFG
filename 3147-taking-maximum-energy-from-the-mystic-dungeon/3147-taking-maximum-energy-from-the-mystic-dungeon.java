class Solution {
    int n ;
    int K ; 
    int solve(int i , int[] energy , int[] dp){
        if(i>=n){
            return 0 ; 
        }
        if(dp[i]!=Integer.MIN_VALUE) {
            return dp[i] ;
        }
        return dp[i] = energy[i] +solve(i+K , energy,dp)  ;
    }
    public int maximumEnergy(int[] energy, int k) {
        n = energy.length ; 
        K = k ;
        int [] dp = new int[n] ; 
        Arrays.fill(dp,Integer.MIN_VALUE) ;  
        int maxEnergy = Integer.MIN_VALUE ; 
        for(int i = 0 ; i < n ; i++){
            maxEnergy = Math.max(maxEnergy , solve(i , energy,dp)) ; 
        }
        return maxEnergy ; 
    }
}