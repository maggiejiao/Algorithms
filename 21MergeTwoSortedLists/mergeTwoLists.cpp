#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(INT_MIN);
    ListNode *tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

int main(){
    ListNode* S = new ListNode(1);
    S->next = new ListNode(3);

    ListNode* T = new ListNode(2);
    T->next = new ListNode(5);
    T->next->next = new ListNode(7);

    ListNode* head = mergeTwoLists(S, T);
    while(head != NULL){
        cout << head->val;
        head = head->next;
    }
}
