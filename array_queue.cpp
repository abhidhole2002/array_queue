#include<iostream>
using namespace std;

class que
{
    int *arr;
    int size;
    int front, rear;

    public:

    que()
    {
        size = 10;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isempty()
    {
        return front == rear;
    }

    void push(int data)
    {
        if(rear == size)
        {
            cout<<"que is full "<<endl;
            return;    
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int pop()
    {
        if(isempty())
        {
            cout<<"que empty "<<endl;
            return -1;
        }
        else
        {
            int poped = arr[front];
            arr[front] = 0;
            front++;
            return poped;
        }   
    }

    int peek()
    {
        if(isempty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int back()
    {
        if(isempty())
        {
            return -1;
        }
        else
        {
            return arr[rear-1];
        }
    }

    int Size()
    {
        return size;
    }

    void print()
    {
        for(int i = front ;i<rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
 
int main()
{
    que obj;
    int size;
    cout<<"How many number you want to add (below 10) ? ";
    cin>>size;

    int arr[size];

    cout<<"enter "<<size<<" element ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        obj.push(arr[i]);
    }

    cout<<"elements in queqe ";
    obj.print();

    cout<<endl<<"Size : "<<obj.Size();
    cout<<endl<<"front : "<<obj.peek()<<endl;
    cout<<"Back : "<<obj.back()<<endl;

}