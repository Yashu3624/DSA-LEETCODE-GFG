//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    void rearrange(struct Node *head)
    {
        //add code here
        if(head==NULL || head->next == NULL || head->next->next == NULL){
            return ;
        }
        Node* odd = head ; 
        Node* even = head->next ; 
        Node* even_head = even ; 
        
        while(odd!=NULL && even!=NULL){
            odd->next = even->next ; 
            if(odd->next != NULL){
                odd = odd->next ; 
            }
            even->next = odd->next ; 
            even = even->next ;
        }
        Node* newNode = NULL;
        Node* temp = even_head;
    
        while(temp!=NULL){
            Node* next = temp->next ; 
            temp->next = newNode ; 
            newNode = temp;
            temp = next ;
        }
    
        even_head = newNode ;
        odd->next = even_head;
          
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends