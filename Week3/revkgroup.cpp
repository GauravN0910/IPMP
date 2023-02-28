#include <bits/stdtr1c++.h>
#include <stdlib.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

void display(ListNode *p)
{
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
}

ListNode *create()
{
    ListNode *p, *q, *r;
    int n, x;
    cin >> n;
    p = new ListNode;
    cin >> x;
    p->val = x;
    q = p;
    for (int i = 1; i < n; i++)
    {
        r = new ListNode;
        cin >> x;
        r->val = x;
        r->next = NULL;
        q->next = r;
        q = r;
    }
    return p;
}

ListNode* reverseKGroup(ListNode* head, int k) { 
    if(head==NULL || head->next==NULL||k==1){
        return head;
    }
    
    ListNode* remaining=head,*x=head;
    int len=0;
    while(x!=NULL){
        x=x->next;
        len++;
    }
    if(len<k){return head;}
    
    for(int i=0;i<k;i++){
        if(remaining->next!=NULL){
            remaining=remaining->next;
        }
    }
    
    ListNode* p1=NULL,*p2=head,*p3=NULL;
    int count=0;
    while(p2!=NULL && count<k){
        p3=p2->next;
        p2->next=p1;

        p1=p2;
        p2=p3;
        count++;
    }
    if(p3!=NULL){
        head->next=reverseKGroup(remaining,k);
    }
    return p1;
    
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    int k;
    cin>>k;
    ListNode* ans=reverseKGroup(head,k);
    display(ans);
}