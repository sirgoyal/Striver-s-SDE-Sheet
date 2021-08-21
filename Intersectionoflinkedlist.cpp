class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return NULL;
        ListNode *p1= headA, *p2= headB;
        while(p1!=p2)
        {
           p1= (!p1)?headB:(p1->next);
            p2= !p2?headA:(p2->next);
        }
        return p1;
    }
};