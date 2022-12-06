// problem link:https://leetcode.com/problems/linked-list-cycle/description/



class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f)return true;
        }
        return false;
    }
};