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

ListNode* delalt(ListNode* head){
    if(head==NULL || head->next ==NULL){
        return NULL;
    }

    ListNode* curr=head;
    ListNode* remaining=head->next->next;

    curr->next=delalt(remaining);
    return curr;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    ListNode* ans;
    ans=delalt(head);
    display(ans);
}