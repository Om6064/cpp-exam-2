#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
class SortSearch
{
public:
    void display(vector<int> arr)
    {
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    void selection(vector<int> &arr, int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int minidx = i;
            for (int j = (i + 1); j < size; j++)
            {
                if (arr[minidx] > arr[j])
                {
                    minidx = j;
                }
            }
            if (minidx != i)
            {
                int temp = arr[minidx];
                arr[minidx] = arr[i];
                arr[i] = temp;
            }
        }
        display(arr);
    }
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high)
        {
            if (arr[left] < arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;

        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    int binary(vector<int> arr, int low, int high, int key)
    {
        if (low > high) return -1;

        int mid = (low+high)/2;

        if (arr[mid] == key) return mid;

        else if (key < arr[mid]) return binary(arr,low,mid-1,key);

        else return binary(arr,mid+1,high,key);
          
    }
    int linear(vector<int> arr, int size, int key)
    {
        int idx = -1;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                idx = i;
            }
        }
        return idx;
    }
};

int main()
{
    SortSearch s1;
    int size, choice;
    cout << "Enter Size : ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    do
    {
        cout << "------------------------------"<<endl;
        cout << "Enter 1 for Selection  Sort : " << endl;
        cout << "Enter 2 for Merge  Sort : " << endl;
        cout << "Enter 3 for Binery  Search : " << endl;
        cout << "Enter 4 for Liner  Search : " << endl;
        cout << "Enter 5 for Exit  : " << endl;
        cout << "------------------------------"<<endl;
        cout << "Enter Your Choice : " << endl;
        cin >> choice;
        cout << "------------------------------"<<endl;

        switch (choice)
        {
        case 1:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            cout << "------------------------------"<<endl;
            s1.selection(arr, size);
            break;
        }
        case 2:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            cout << "------------------------------"<<endl;
            s1.mergeSort(arr, 0, size - 1);
            s1.display(arr);
            break;
        }
        case 3:
        {

            s1.selection(arr,size);
            int key;
            cout << "Enter key : ";
            cin >> key;
            int idx = s1.binary(arr,0,size-1,key);
            if (idx != -1)
            {
                cout << "------------------------------"<<endl;
                cout << "Yahh ! your element is Found IN index " << idx << endl;
                cout << "------------------------------"<<endl;
            }
            else
            {
                cout << "------------------------------"<<endl;
                cout << "oops!! Element Is Not Found ! " << endl;
                cout << "------------------------------"<<endl;
            }
            break;
        }
        case 4:
        {
            s1.display(arr);
            int key;
            cout << "Enter key : ";
            cin >> key;
            int idx = s1.linear(arr, size, key);
            if (idx != -1)
            {
                cout << "------------------------------"<<endl;
                cout << "Yahh ! your element is Found IN index " << idx << endl;
                cout << "------------------------------"<<endl;
            }
            else
            {
                cout << "------------------------------"<<endl;
                cout << "oops!! Element Is Not Found ! " << endl;
                cout << "------------------------------"<<endl;
            }

            break;
        }
        case 5:
        {   
            cout << "------------------------------"<<endl;
            cout << "Thank You !! Visit Again :: "<<endl;
            cout << "------------------------------"<<endl;
            break;
        }

        default:
            cout << "------------------------------"<<endl;
            cout<<"Invaild Input !! "<<endl;
            cout << "------------------------------"<<endl;
            break;
        }
    } while (choice != 5);

    return 0;
}