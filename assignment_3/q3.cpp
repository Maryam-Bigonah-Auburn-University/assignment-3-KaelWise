#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    //Array and size variable created
    int size = 0, myArray[50];
    //Input size of array
        cout << "\nHow many numbers do you want to enter:";
        cin >> size;
    //Input array values
        for(int i = 0; i < size; i++) cin >> myArray[i];

    //Sort array
    for(int i = 0; i < size; i++){
        for(int j = 0; j <= i; j++){
            if(myArray[i] > myArray[j]){
                int temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }
    //Display sorted array and unique number count
    cout << left << setw(10) << "Number" << setw(10) << "Count" << endl;
    for(int i = 0; i < size; i++){
        int count = 1;
        while(myArray[i] == myArray[i + 1] && i < size){
            count++;
            i++;
        }
        cout << left << setw(10) << myArray[i] << setw(10) << count << endl;
    }
    return 0;

}
