struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* res;
    ListNode* tmp = res;

    do {
      ListNode* n;
      int sum = l1->val + l2->val;
      if (sum > 9) {
        tmp->val += sum - 10;
        n->val = 1;
      } else {
        tmp->val += sum;
        n->val = 0;
      }
      tmp->next = n;
      tmp = n;
    } while (l1->next == nullptr && l2->next == nullptr);
    return res;
  }
};