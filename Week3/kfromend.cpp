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


int kfromend(ListNode* head, int k){
    ListNode* p1=head;
    ListNode* p2=head;

    for(int i=0;i<k;i++){
        p1=p1->next;
    }

    while(p1!=NULL){
        p1=p1->next;
        p2=p2->next;
    }

    return p2->val;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    int n;
    cin>>n;
    cout<<kfromend(head,n);
}