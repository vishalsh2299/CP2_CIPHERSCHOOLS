ListNode *removeElements(ListNode *head, int val)
{
    if (head == NULL)
        return NULL;
    if (head->val == val && head->next == NULL)
        return NULL;
    ListNode *temp = head;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            head = temp->next;
            temp = head;
            continue;
        }
        else if (temp->next != NULL && temp->next->val == val)
        {
            if (temp->next->next != NULL)
            {
                temp->next = temp->next->next;
                continue;
            }
            else
            {
                temp->next = NULL;
                break;
            }
        }
        temp = temp->next;
    }
    return head;
}