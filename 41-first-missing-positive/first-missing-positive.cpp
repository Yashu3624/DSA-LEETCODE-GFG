class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        int n = A.size();
    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        if(A[i]<=n && A[i]>0){
            hash[A[i]]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return hash.size();
    }
};