#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    CircularQueue()
    {
        size = 100001;
        int arr[size];
        // OR arr = new int[size];
        front = rear = 0;
    }
    void enqueue(int value)
    {
        if (rear == (front - 1) % (size - 1))
        {
            cout << "Queue Full" << endl;
        }
        else
        {
            arr[rear] = value;
            rear++;
            if (rear == size)
            {
                rear = rear % (size - 1);
            }
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            // cout << "Queue Empty" << endl;
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
            deque<int> d;
            vector<int> v;
                }
    }
};