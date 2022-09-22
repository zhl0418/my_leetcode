/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* t;
    ListNode* h;
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    if (list1->val < list2->val) {
      t = h = list1;
      list1 = list1->next;

    } else {
      t = h = list2;
      list2 = list2->next;
    }
    while (list1 != nullptr && list2 != nullptr) {
      if (list1->val < list2->val) {
        ListNode* tmp = list1;
        t->next = list1;
        t = list1;
        list1 = tmp->next;
      } else {
        ListNode* tmp = list2;
        t->next = list2;
        t = list2;
        list2 = tmp->next;
      }
    }
    if (list1 == nullptr) {
      t->next = list2;
      return h;
    }
    t->next = list1;
    return h;
  }
};