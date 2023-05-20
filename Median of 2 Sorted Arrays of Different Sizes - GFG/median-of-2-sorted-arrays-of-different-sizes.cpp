//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& a1, vector<int>& a2)
    {
        // Your code goes here
        int i = 0 , j = 0 , k = 0 ;
        int n = a1.size();
        int m = a2.size();
        int arr[m+n];
        while(i<n && j < m){
            if(a1[i]<=a2[j]){
                arr[k++]=a1[i++];
            }
            else{
                arr[k++]=a2[j++];
            }
        }
        while(i<n){
            arr[k++]=a1[i++];
        }
        while(j<m){
            arr[k++]=a2[j++];
        }
        int l = m+n ;
        if(l%2==0){
            double a = arr[l/2];
            double b = arr[(l/2)-1];
            return (a+b)/2;
            
        }
        else
            return arr[l/2];
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends