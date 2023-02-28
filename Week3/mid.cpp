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

int mid(ListNode *head){

    if(head==NULL|| head->next==NULL){
        return -1;
    }

    ListNode *slow=head, *fast=head;


    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->val;
}

int main(){
    ListNode* head=new ListNode;
    head=create();

    cout<<mid(head);
}