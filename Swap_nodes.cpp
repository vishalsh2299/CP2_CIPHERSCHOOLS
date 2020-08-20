ListNode *swapPairs(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        int t = temp->val;
        temp->val = temp->next->val;
        temp->next->val = t;
        temp = temp->next->next;
    }
    return head;
}