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

ListNode* sortedIntersect(ListNode* a,ListNode* b)
{ 
    if (a == NULL || b == NULL)
        return NULL;

    if (a->val < b->val)
        return sortedIntersect(a->next, b);
  
    if (a->val > b->val)
        return sortedIntersect(a, b->next);

    ListNode* temp = new ListNode;
    temp->val = a->val;

    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}

int main(){
    ListNode* head1=new ListNode;
    head1=create();
    ListNode *head2=new ListNode;
    head2=create();

    ListNode *ans=sortedIntersect(head1,head2);
    display(ans);
}