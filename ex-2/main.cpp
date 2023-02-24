#include <iostream>
#include <sstream>

using namespace std;

void heapify(float arr[], int n, int i)
{
    int largest = i;
    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr, n,largest);
    }
}

void heapSort(float arr[], int n)
{
    for (int i = n/2-1; i >= 0; --i){
        heapify(arr, n, i);
    }

    for (int i = n-1; i >=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(float arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    std::string str, s;
    std::getline(std::cin, str);

    std::stringstream ss(str);
    float arr[15];

    int i = 0;
    while (getline(ss, s, ' ')) {
        arr[i] = stof(s); // не смог реализовать через push_back
        i++;
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
