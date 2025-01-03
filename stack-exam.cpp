#include <iostream>

using namespace std;
class Stack
{
private:
    int *arr;
    int top;
    int size;
    int count;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->count = 0;
    }
    ~Stack()
    {
        delete[] arr;
        arr = nullptr;
    }
    void Puch();
    void Pop();
    void Top();
    bool isEmpty();
    bool isFull();
    void Display();
};
void Stack::Puch()
{
    if (this->top == (size - 1))
    {
        cout << "-------------------------------"<<endl;
        cout << "Stack IS Overflow : " << endl;
        cout << "-------------------------------"<<endl;
        return;
    }
    int data;
    cout << "-------------------------------"<<endl;
    cout << "Enter Your Data : ";
    cin >> data;
    cout << "-------------------------------"<<endl;
    this->top++;
    this->arr[top] = data;
    this->count++;
}
void Stack::Display()
{
    if (this->top == -1)
    {
        cout << "-------------------------------"<<endl;
        cout << "Stack is UnderFlow : " << endl;
        cout << "-------------------------------"<<endl;
        return;
    }
    for (int i = this->top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Stack::Pop()
{
    if (this->top == -1)
    {
        cout << "-------------------------------"<<endl;
        cout << "Stack is UnderFlow : " << endl;
        cout << "-------------------------------"<<endl;
        return;
    }
    cout << "Deleted Element Is : " << this->arr[top] << endl;
    this->arr[top] = 0;
    this->top--;
    this->count--;
}
void Stack::Top()
{
    if (this->top == -1)
    {
        cout << "-------------------------------"<<endl;
        cout << "Stack is UnderFlow : " << endl;
        cout << "-------------------------------"<<endl;
        return;
    }
    cout << "-------------------------------"<<endl;
    cout << "Top Element Is : " << this->arr[top] << endl;
    cout << "-------------------------------"<<endl;
}
bool Stack::isEmpty()
{
    if (this->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::isFull()
{
    if (this->top == (size - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Stack s1(3);
    int choice;

    do
    {
        cout << "-------------------------------" << endl;
        cout << "Enter 1 for Puch an Element : " << endl;
        cout << "Enter 2 for Pop an Element : " << endl;
        cout << "Enter 3 for Top  Element : " << endl;
        cout << "Enter 4 for isEmpty : " << endl;
        cout << "Enter 5 for isFull : " << endl;
        cout << "Enter 6 for Display : " << endl;
        cout << "Enter 0 for Exit : " << endl;
        cout << "Enter Your Choice : " << endl;
        cout << "-------------------------------" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            s1.Puch();
            break;
        }
        case 2:
        {
            s1.Pop();
            break;
        }
        case 3:
        {
            s1.Top();
            break;
        }
        case 4:
        {
            if (s1.isEmpty())
            {
                cout << "-------------------------------" << endl;
                cout << "Stack Is Empty : " << endl;
                cout << "-------------------------------" << endl;
            }
            else
            {
                cout << "-------------------------------" << endl;
                cout << "Stack Is Not Empty : " << endl;
                cout << "-------------------------------" << endl;
            }

            break;
        }
        case 5:
        {
            if (s1.isFull())
            {
                cout << "-------------------------------" << endl;
                cout << "Stack Is Full : " << endl;
                cout << "-------------------------------" << endl;
            }
            else
            {
                cout << "-------------------------------" << endl;
                cout << "Stack Is Not Full : " << endl;
                cout << "-------------------------------" << endl;
            }
            break;
        }
        case 6:
        {
            s1.Display();
            break;
        }
        case 0:
        {
            cout << "-------------------------------" << endl;
            cout << "Thank You !! Visit Again :: " << endl;
            cout << "-------------------------------" << endl;
            break;
        }

        default:
            cout << "-------------------------------" << endl;
            cout << "Invalid Input :: " << endl;
            cout << "-------------------------------" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}