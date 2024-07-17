void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[smallest] > arr[left])
    {
        smallest = left;
    }
    if (right <= n && arr[smallest] > arr[right])
    {
        smallest = right;
    }
    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}