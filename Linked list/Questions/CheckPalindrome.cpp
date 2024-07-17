// Approach 1-------------------------------------------
// space kam le raha dusre approach se that is o(1) time same that is o(n).

class Solution
{
private:
    Node *getMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }
    Node *reverse(Node *head)
    {

        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        // step 1 -> find Middle
        Node *middle = getMid(head);
        // cout << "Middle " << middle->data << endl;

        // step2 -> reverse List after Middle
        Node *temp = middle->next;
        middle->next = reverse(temp);

        // step3 - Compare both halves
        Node *head1 = head;
        Node *head2 = middle->next;

        while (head2 != NULL)
        {
            if (head2->data != head1->data)
            {
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // step4 - repeat step 2
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};
//Approach 2--------------------------------------------------------------------------------
// array me list ke data ko push back karke. check palindrome same as array
// isme sapce complexity is o(n) and time complexit bhi o(n).
class Solution
{
private:
    bool checkPalindrome(vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        while (s <= e)
        {
            if (arr[s] != arr[e])
            {
                return 0;
            }
            s++;
            e--;
        }
        {
        }
        return 1;
    }

} public :
    // Function to check whether the list is palindrome.
    bool
    isPalindrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp data);
        temp = temp->next                                                                                                                                                                           ;
    }
    I return checkPalindrome(arr);
}
;