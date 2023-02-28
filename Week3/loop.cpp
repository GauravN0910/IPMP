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

bool detect(ListNode* head){
    ListNode *slow=head,*fast=head;

    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    ListNode* head=new ListNode;
    head=create();
    if(detect(head)){
        cout<<"yes";
    }
    else{
        cout<<"nO";
    }

    cout<<endl;

    head->next->next=head; //test
    if(detect(head)){
        cout<<"yes";
    }
    else{
        cout<<"nO";
    }
}