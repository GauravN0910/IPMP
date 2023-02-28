#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


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

void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node *ptr1=head,*x;
        
        while(ptr1){
            for(int i=1;i<M && ptr1!=NULL;i++){
                ptr1=ptr1->next;
            }
            if(ptr1==NULL){
                return;
            }
            
            x=ptr1->next;
            for(int i=0;i<N && x!=NULL;i++){
                x=x->next;
            }
            ptr1->next=x;
            ptr1=x;
        }
        
    }
};
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        Solution ob;
        ob.linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}

// } Driver Code Ends