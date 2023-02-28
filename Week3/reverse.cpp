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


ListNode* reverse(ListNode* head){
    ListNode *prev=NULL,*curr=head,*next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    display(head);
    ListNode* rev=reverse(head);
    cout<<endl;
    display(rev);
}