// Find min and max from an array and then reverse
#include<iostream>
#include <utility>
using namespace std;
void swapMinMax(int*, int*);

int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements to the array: " << endl;
    for(int i=0; i<n; i++)
        cin >> arr[i];


    int minIndex=0, maxIndex=0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[minIndex]) minIndex=i;
        if(arr[i] > arr[maxIndex]) maxIndex=i;
    }

    // Swap
    swapMinMax(&arr[minIndex], &arr[maxIndex]);


    cout << "The array after swapping is: " << endl;
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
    printf("\n");

    return 0;
}


void swapMinMax(int* min, int* max){
    int temp = *min;
    *min = *max;
    *max = temp;
}
