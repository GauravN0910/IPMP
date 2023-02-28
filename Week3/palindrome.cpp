#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool isPalindrome(Node *head)
    {
        Node *ptr = head;
        stack<int> stk;

        while (ptr != NULL)
        {
            stk.push(ptr->data);
            ptr = ptr->next;
        }

        while (head != NULL)
        {
            int i = stk.top();
            stk.pop();

            if (i != head->data)
            {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};

int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.isPalindrome(head) << endl;
    }
    return 0;
}
