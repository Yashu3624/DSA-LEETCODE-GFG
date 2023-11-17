//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int a[26] = {0};
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        char ch = s[i];
        if(a[ch-'a']!=0){
            return string(1,ch);
        }
        else{
            a[ch-'a']++;
        }
    }
    return "-1" ;
}