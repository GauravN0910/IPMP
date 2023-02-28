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

void remloop(ListNode* loop){
    ListNode *p1=loop, *p2=loop;
    int size=0;

    while(p2!=p1){
        p2=p2->next;
        size++;
    }

    for(int i=0;i<size-1;i++){
        p1=p1->next;
    }
    p1->next=NULL;
}

void detectandrem(ListNode* head){
    if (head == NULL || head->next == NULL)
        return;
  
    ListNode *slow = head, *fast = head;

    slow = slow->next;
    fast = fast->next->next;

    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(slow==fast){
        slow=head;

        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
            }
        }
        else{
            while(fast->next!=slow->next){
                fast=fast->next;
            }
        }
    }
    fast->next=NULL;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    head->next->next->next=head; //test
    detectandrem(head);
    display(head);
}

