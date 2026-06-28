#include <iostream>
using namespace std;

#define SIZE 5

int cirque[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        cout << "Queue Overflow" << endl;
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == SIZE - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    cirque[rear] = value;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
        return;
    }

    cout << cirque[front] << " deleted from queue" << endl;

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == SIZE - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue: ";

    int i = front;
    while (true)
    {
        cout << cirque[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    cout << endl;
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(8);
    enqueue(9);

    display();

    return 0;
}
