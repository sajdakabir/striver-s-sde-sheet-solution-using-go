// leetcode link:https://leetcode.com/problems/intersection-of-two-linked-lists/description/



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL)return headB;
        if(headB==NULL)return headA;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            a=a==NULL?headB:a->next;
            b=b==NULL?headA:b->next;
        }
        return b;
    }
};