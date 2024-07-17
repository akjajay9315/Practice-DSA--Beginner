// O(n) me hota ye heapify but pahle wal away to make heap is in O(log n)
// Do code Studio Question in Love Babbar video (min heap wala bhi)
// Also we did 1 base in indexing i this but if 0 indexing used than folrmula of left and right index chnges
// In CBT all leaf nodes are in index ->  n/2 + 1 to n

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    heap h;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Printing the array :" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
 