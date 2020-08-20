ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (!l1)
        return l2;
    if (!l2)
        return l1;
    ListNode *res = NULL;
    if (l1->val <= l2->val)
    {
        res = l1;
        res->next = mergeTwoLists(l1->next, l2);
    }
    else
    {
        res = l2;
        res->next = mergeTwoLists(l1, l2->next);
    }
    return res;
}