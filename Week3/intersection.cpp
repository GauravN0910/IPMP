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

ListNode* inter(ListNode* head1, ListNode* head2)
{
    ListNode* ptr1 = head1;
    ListNode* ptr2 = head2;

    if (ptr1 == NULL || ptr2 == NULL)
        return NULL;

    while (ptr1 != ptr2) {
 
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if (ptr1 == ptr2)
            return ptr1;

        if (ptr1 == NULL)
            ptr1 = head2;

        if (ptr2 == NULL)
            ptr2 = head1;
    }
    return ptr1;
}

int main(){
    ListNode* head1=new ListNode;
    head1=create();

    ListNode *head2=new ListNode;
    head2=create();

    head2->next->next=head1->next; //test

    ListNode* ans=inter(head1,head2);

    display(ans);
}