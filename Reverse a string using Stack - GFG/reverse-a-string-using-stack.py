#{ 
 # Driver Code Starts

# } Driver Code Ends
def reverse(s):
    
    #Add code here
    stack = []
    res = ""
    for i in s:
        stack.append(i)
    for i in range(len(stack)):
        res +=stack.pop()
    return res
    
    
#{ 
 # Driver Code Starts.
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        print(reverse(str1))
# } Driver Code Ends