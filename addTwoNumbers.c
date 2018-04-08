/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    struct ListNode *ri = malloc(sizeof(struct ListNode));
    struct ListNode *r = ri;
    
    carry += p1->val;
    carry += p2->val;
    p1 = p1->next;
    p2 = p2->next;
    ri->val = (carry % 10);
    ri->next = NULL;
    carry /= 10;    
    
    while(p1 != NULL || p2 != NULL) {
        if(p1 != NULL) {
            carry += p1->val;
            p1 = p1->next;
        }
        if(p2 != NULL) {
            carry += p2->val;
            p2 = p2->next;
        }
        
        struct ListNode *rj = malloc(sizeof(struct ListNode));
        rj->val = (carry % 10);
        rj->next = NULL;
        carry /= 10;
        ri->next = rj;
        ri = rj;
    }
    
    if(carry > 0) {
        struct ListNode *last = malloc(sizeof(struct ListNode));
        
        last->val = carry;
        last->next = NULL;
        ri->next = last;
    }
    
    return r;
}
