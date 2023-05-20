//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>>s;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        for(int i = 0 ; i < n-3 ; i++){
            for(int j = i+1 ; j < n ; j++){
                int a = j+1 , b = n-1;
                while(a<b){
                     if(arr[i]+arr[j]+arr[a]+arr[b]==k)
                    {
                        
                        s.insert({arr[i],arr[j],arr[a],arr[b]});
                       
                    }
                    
                    if(arr[i]+arr[j]+arr[a]+arr[b]<k)
                    a++;
                    else b--;
                }
            }
        }
        for(auto it:s){
            res.push_back(it);
        }
        s.clear();
        return res ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends