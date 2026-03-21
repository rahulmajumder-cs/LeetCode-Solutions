/*
Problem: Reverse Nodes in k-Group
Language: C
*/

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (!head || k == 1) return head;

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *prevGroup = &dummy;
    struct ListNode *end = head;

    while (1) {
        int count = 0;
        struct ListNode *temp = end;
        while (temp && count < k) {
            temp = temp->next;
            count++;
        }
        if (count < k) break;

        struct ListNode *prev = temp;
        struct ListNode *curr = end;
        struct ListNode *next = NULL;

        for (int i = 0; i < k; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        struct ListNode *start = prevGroup->next;
        prevGroup->next = prev;
        prevGroup = start;
        end = curr;
    }

    return dummy.next;
}
