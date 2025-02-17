/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    // int count = 0;
    struct ListNode* temp1 = head;
    struct ListNode* temp2 = head;


    while(temp2 != NULL && temp2->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
        temp2 = temp2->next;
        // count++;
    }
    return temp1;
}