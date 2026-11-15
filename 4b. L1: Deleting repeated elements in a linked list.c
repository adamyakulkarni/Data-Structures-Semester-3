struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    struct ListNode *temp, *current;

    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    current = head;
    temp = current;

    while (current != NULL)
    {
        if (temp->next == NULL)
        {
            current = current->next;
            temp = current;
        }
        else if (current->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
