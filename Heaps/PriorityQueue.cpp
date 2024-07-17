// Heap using STL
// Priority Queue by default makkes Max Heap but we can also make min heap by using stl.
// Read Priority Queue documentation

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "using Priority Queue here" << endl;

    // Max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Element at Top " << pq.top() << endl;
    pq.pop();
    cout << "Element at Top " << pq.top() << endl;
    cout << "Size is " << pq.size() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout << "Element at Top " << minheap.top() << endl;
    minheap.pop();
    cout << "Element at Top " << minheap.top() << endl;
    cout << "Size is " << minheap.size() << endl;

    return 0;
}