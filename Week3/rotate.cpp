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

ListNode* rotate(ListNode* head, int k) {
    ListNode *p,*q,*r;

    p=head;

    int len=0;
    while(p!=NULL){
        p=p->next;
        len++;
    }
    if(k>=len){
        k=k%len;
    }
    
    if(head==NULL||k==0){
        return head;
    }

    p=head;

    for(int i=0;i<len-1-k;i++){
        p=p->next;
    }

    q=p->next;
    p->next=NULL;
    r=q;
    while(q->next!=NULL){
        q=q->next;
    }

    q->next=head;
    return r;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    int k;
    cin>>k;
    ListNode* ans=rotate(head,k);
    display(ans);
}