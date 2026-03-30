/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *curr = slow->next;
        ListNode *prev = NULL;
        while(curr){
         ListNode *nextNode = curr->next;
         curr->next = prev;
         prev = curr;
         curr = nextNode;
        }

        ListNode *list1 = head;
        ListNode *list2 = prev;
        ListNode *temp = head;

        slow->next =   NULL;
        while(list2){
            ListNode *next1 = list1->next;
            ListNode *next2 = list2->next;

            list1->next = list2;
            list2->next = next1;

            list1 = next1;
            list2 = next2;
        }

        return;
    }
};
