//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int cnt = 0 ;
        int idx = 0 ;
        while(N){
            if((N&1)==1){
                cnt++;
            }
            N >>= 1;
            idx++;
        }
        if(cnt!=1){
        return -1 ;
        }
        return idx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends