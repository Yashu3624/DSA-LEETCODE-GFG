//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        
        // Your code here
        int res1[256]={0}, res2[256]={0};
        
        if(s.size()!=t.size())
            return false;
        for(int i = 0 ; i < s.size() ; i++){
            if(res1[s[i]]!=res2[t[i]])
                return false;
            res1[s[i]] = i+1;
            res2[t[i]] = i+1;
            
        }
        
        
       return true; 
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends