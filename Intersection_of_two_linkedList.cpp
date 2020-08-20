ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int a = 0, b = 0;

    ListNode *tempA = headA;
    while (tempA != NULL)
    {
        a++;
        tempA = tempA->next;
    }

    ListNode *tempB = headB;
    while (tempB != NULL)
    {
        b++;
        tempB = tempB->next;
    }

    if (a > b)
    {
        a = a - b;
        tempA = headA;
        while (a)
        {
            tempA = tempA->next;
            a--;
        }

        while (tempA != NULL && headB != NULL)
        {
            if (tempA == headB)
            {
                return tempA;
            }
            tempA = tempA->next;
            headB = headB->next;
        }
    }
    else
    {
        b = b - a;
        tempB = headB;
        while (b)
        {
            tempB = tempB->next;
            b--;
        }
        while (tempB != NULL && headA != NULL)
        {
            if (tempB == headA)
            {
                return tempB;
            }
            tempB = tempB->next;
            headA = headA->next;
        }
    }
    return NULL;
}