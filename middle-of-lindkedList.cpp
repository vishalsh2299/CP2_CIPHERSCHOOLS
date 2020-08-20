ListNode *middleNode(ListNode *head)
{
    ListNode *first = head;
    ListNode *second = head;

    while (second != NULL && second->next != NULL)
    {
        second = second->next->next;
        first = first->next;
    }
    return first;
}