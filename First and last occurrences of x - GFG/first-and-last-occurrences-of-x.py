#User function Template for python3


def find(arr,n,x):
    # code here
    a , b = -1 , -1
    for i in range(n):
        if arr[i]==x:
            a = i 
            break
    rev = arr[::-1]
    for i in range(n):
        if rev[i]==x:
            b = n-1-i
            break
    return a,b



#{ 
 # Driver Code Starts
t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    n=l[0]
    x=l[1]
    arr=list(map(int,input().split()))
    ans=find(arr,n,x)
    print(*ans)
# } Driver Code Ends