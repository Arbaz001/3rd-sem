class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode*  b = headB;
        set<ListNode*> st;
        while(a != NULL){
            st.insert(a);
            a = a-> next;
        }
        while(b != NULL){
            if(st.find(b) != st.end()){
                return b;
            }
              st.insert(b);
            b  = b->next;
        }
        return NULL;
    }
};
