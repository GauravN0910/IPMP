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

void sortList(ListNode *head) {
  int count[3] = {0, 0, 0};

  ListNode *current = head;
  while (current != NULL) {
    count[current->val]++;
    current = current->next;
  }

  current = head;
  int i = 0;
  while (current != NULL) {
    if (count[i] == 0) {
      i++;
    } 
    else {
      current->val = i;
      count[i]--;
      current = current->next;
    }
  }
}

int main(){
    ListNode* head=new ListNode;
    head=create();

    sortList(head);
    display(head);
}