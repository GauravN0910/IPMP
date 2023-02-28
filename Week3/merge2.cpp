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

ListNode* merge(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        {
			return list2;
		}

		if(list2 == NULL)
        {
			return list1;
		} 

		if(list1 -> val <= list2 -> val)
        {
			list1 -> next = merge(list1 -> next, list2);
			return list1;
		}

		else
        {
			list2 -> next = merge(list1, list2 -> next);
			return list2;            
		}
    }


int main(){
    ListNode* head1=new ListNode;
    head1=create();
    ListNode* head2=new ListNode;
    head2=create();
    ListNode *ans=merge(head1,head2);
    display(ans);
}