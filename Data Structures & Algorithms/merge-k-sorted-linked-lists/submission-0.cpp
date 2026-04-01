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
   ListNode* merge(ListNode* list1 , ListNode* list2){
        ListNode *temp = new ListNode(0);
        ListNode *head = temp;

        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        while(list1){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
        }
        while(list2){
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
        }
          return head->next;
   }
     
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return NULL;
        ListNode *result = lists[0];
        for(int i = 1 ; i < lists.size();i++){
            result = merge(result,lists[i]);
        }
           return result;
    }
};
