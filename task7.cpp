#include <iostream>
#include <vector>
using namespace std;

int main()
{

    std::vector<int> myvectorspace; // vector declared to store different positons of an element
    int size;
    cout << "Array Size Required: ";
    cin >> size; // input size from user
    if (size <= 0)
    {
        cout << "Array is empty";
        return 0; // program ends
    }

    int array[size];                   // array declared
    cout << "Add elements in Array: "; // add elements in array
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter the Element you want to search: ";
    cin >> key;                    // input search element from user
    for (int i = 0; i < size; i++) // if array element matches our key add it in vector
    {
        if (array[i] == key)
            myvectorspace.push_back(i);
    }
    if (myvectorspace.size() == 0)
    {
        cout << "Key not Found";
    }
    else
    {
        cout << "All the indices of the key element are: [";
        for (int i = 0; i < myvectorspace.size(); i++) // print the indices of elements in vector
        {
            cout << " " <<myvectorspace[i] <<" ";
        }
        cout << "]";
    }
    return 0;
}