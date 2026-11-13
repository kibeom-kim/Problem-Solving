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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        int temp = 0, carry = 0;
        
        while(l1 || l2 || carry){
            if(!l1 && !l2) temp = carry;
            else if(!l1) temp = l2->val + carry;
            else if(!l2) temp = l1->val + carry;
            else temp = l1->val + l2->val + carry;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            
            if(temp >= 10){
                temp -= 10;
                carry = 1;
            }
            else carry = 0;
            
            ListNode* node = new ListNode(temp);
            if(head->next == NULL){
                head->next = node;
            }
            else {
                ListNode* thead = head;
                while(1){
                   if(thead->next == NULL) break;
                    thead = thead->next;
                }
                
                thead->next = node;
            }
        }
        return head->next;
    }
};