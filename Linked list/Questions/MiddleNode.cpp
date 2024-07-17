// 2 approaches are there
// first approach is by length

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head head->next;
    }
    return len;
}
Node *FindMiddle(Node *head)
{
    int len = getLength(head);
    int ans=(len / 2);
    Node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
}

// Second Approach-

Node *getMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    // 2 nodes - needed or not?
    if (head->next->next == NULL)
    {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow slow->next;
    }
    return slow;
}
Node *findMiddle(Node *head)
{
    return getMiddle(head);
}