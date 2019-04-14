/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//暴力求解K个有序链表合并
class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		vector<int> vec;
		int size = lists.size();
		for (int i = 0; i<size; i++){
			ListNode* p = lists[i];
			while (p){
				vec.push_back(p->val);
				p = p->next;
			}
		}
		sort(vec.begin(), vec.end());
		ListNode* dummy = new ListNode(-1), *cur = dummy;
		for (int i = 0; i<vec.size(); i++){
			cur->next = new ListNode(vec[i]);
			cur = cur->next;
		}
		return dummy->next;
	}
};