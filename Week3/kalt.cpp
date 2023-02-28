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

ListNode *kAltReverse(ListNode *head, int k)
{
    ListNode* current = head;
    ListNode* next;
    ListNode* prev = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
    }

    if(head != NULL)
    head->next = current;

    count = 0;
    while(count < k-1 && current != NULL )
    {
    current = current->next;
    count++;
    }

    if(current != NULL)
    current->next = kAltReverse(current->next, k);
    return prev;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    int k;
    cin>>k;
    ListNode* x=kAltReverse(head,k);
    display(head);
}