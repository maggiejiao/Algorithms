#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};

ListNode* reverseSecondHalfList(ListNode* head){
	if(head == NULL || head->next == NULL) return head;
	ListNode* fast = head;
	ListNode* slow = head;
	while(fast->next != NULL && fast->next->next != NULL ){ //&& fast->next->next->next != NULL
		fast = fast->next->next;
		slow = slow->next;
	}
	ListNode* pre = slow->next;
	ListNode* cur = pre->next;
	while(cur!=NULL){
		pre->next = cur->next;
		cur->next = slow->next;
		slow->next = cur;
		cur = pre->next;
	}
	return head;
}


int main(){
	ListNode* head = new ListNode(1);
	ListNode* node1 = new ListNode(2);
	ListNode* node2 = new ListNode(3);
	ListNode* node3 = new ListNode(4);
	ListNode* node4 = new ListNode(5);
	ListNode* node5 = new ListNode(6);
	ListNode* node6 = new ListNode(7);
	ListNode* node7 = new ListNode(8);
	ListNode* node8 = new ListNode(9);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	ListNode* rvalue = reverseSecondHalfList(head);
	while(rvalue!=NULL){
		cout << rvalue->val;
		rvalue = rvalue->next;
	}
}
