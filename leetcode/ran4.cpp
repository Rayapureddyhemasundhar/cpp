struct ListNode {
    int val;
    ListNode* next;
};

bool hasCycle(ListNode *head) {
    if (!head) return false;

    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}