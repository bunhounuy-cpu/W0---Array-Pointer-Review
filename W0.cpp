#include <iostream>
using namespace std;

#define MAX 20

void printarr(int arr[], int size){
    for(int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void inserElement(int arr[], int &size, int num, int index){
    for(int i = size; i > index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = num;
    size++;
}

void deleteElement(int arr[], int &size, int index){
    for(int i = index; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    size--;
}


int main(){
    int arr[MAX];
    int size, element, iIndex, dIndex;

    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter elements" << endl;
    for(int i=0; i< size; i++){
        cout <<  "> ";
        cin >> arr[i];
    }
    cout << "Original array: ";
    printarr(arr, size);

    cout << "\nEnter element to insert: ";
    cin >> element;
    cout << "Enter index to insert at: ";
    cin >> iIndex;
    inserElement(arr, size, element,iIndex);
    cout << "After insertion: ";
    printarr(arr, size);

    cout << "\nEnter index to delete: ";
    cin >> dIndex;
    deleteElement(arr, size, dIndex);
    cout << "After delete element: ";
    printarr(arr, size);



    return 0;
}
