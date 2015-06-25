#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

void insert(ListNode* head, int count, int* value) {
	head->val = *value++;
	ListNode* now = head;
	while (--count) {
		ListNode* node = new ListNode(*value++);
		now->next = node;
		now = node;
	}
}

ListNode* merge(ListNode* head1, ListNode* head2) {
	ListNode dummy(0);
	ListNode* head = &dummy;
	ListNode* now = head;
	while (head1 != NULL && head2 != NULL) {
		if (head1->val < head2->val) {
			now->next = head1;
			now = head1;
			head1 = head1->next;
		} else {
			now->next = head2;
			now = head2;
			head2 = head2->next;
		}
	}
	now->next = head1 == NULL ? head2 : head1;
	return head->next;
}

ListNode* sortList(ListNode* head) {
	if (head == NULL || head->next == NULL) 
		return head;
	ListNode* middle = head;
	ListNode* end = head->next;
	while (end != NULL && end->next != NULL) {
		middle = middle->next;
		end = end->next->next;
	}
	end = middle->next;
	middle->next = NULL;
	return merge(sortList(head), sortList(end));
}

int _tmain(int argc, _TCHAR* argv[]) {
	int a[] = { 5, 4, 3, 2, 1, 0 };
	ListNode *head = new ListNode(0);
	insert(head, 6, a);
	ListNode* newlist = sortList(head);
	return 0;
}
