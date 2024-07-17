// Reverse LL

// tc - o(n)
// first solution

Node *reverse Linked List(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// second solution (recursive)
// third solution 











    // Reverse LL in K groups

    /****************************************************************
        Following is the Linked List node structure

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

    *****************************************************************/
// tc - o(n)

    Node *kReverse(Node * head, int k)
    {
        // base call
        if (head == NULL)
        {
            return NULL;
        }

        // step1: reverse first k nodes
        Node *next = NULL;
        Node *curr = head;
        Node *prev = NULL;
        int count = 0;

        while (curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // step2: Recursion dekhlega aage ka
        if (next != NULL)
        {
            head->next = kReverse(next, k);
        }

        // step3: return head of reversed list
        return prev;
    }
