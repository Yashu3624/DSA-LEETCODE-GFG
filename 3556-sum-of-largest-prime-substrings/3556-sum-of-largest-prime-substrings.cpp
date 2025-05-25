class Solution {
public:
bool isPrime(long long n){
    if(n<2) return false ; 
    for(long long i = 2 ; i * i <= n ; i++)
        if(n%i==0) return false ;
        return true ; 

    
}
    long long sumOfLargestPrimes(string s) {
        vector<long long>primes ; 
        for(long long i = 0 ; i < s.size() ; i++){
            long long temp = 0 ; 
            for(long long j = i ; j < s.size() ; j++){
                temp = temp *10+(s[j]-'0') ; 
                if(isPrime(temp)){
                    primes.push_back(temp) ; 
                }
            }
        }
        sort(primes.begin() , primes.end()) ; 
        primes.erase(unique(primes.begin(),primes.end()) , primes.end()) ;
        long long n = primes.size() ; 
        if(n<3) return accumulate(primes.begin() , primes.end() , 0ll) ; 
        return primes[n-1] + primes[n-2] + primes[n-3] ; 
    }
};