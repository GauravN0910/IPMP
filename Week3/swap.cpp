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

ListNode* swapNodes(ListNode* head, int k) {
    ListNode *p1=head,*p2=head,*p3=head;
    for(int i=0;i<k;i++){
        p1=p1->next;
    }
    while(p1!=NULL){
        p2=p2->next;
        p1=p1->next;
    }
    for(int i=1;i<k;i++){
        p3=p3->next;
    }

    int c;
    c=p2->val;
    p2->val=p3->val;
    p3->val=c;
    return head;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    int k;
    cin>>k;
    ListNode* ans=swapNodes(head,k);
    display(ans);
}