#include <iostream>
#include <iomanip>

using namespace std;

int countOccurances(int arr[], int size, int n);
void sortArray(int arr[], int size);

int main() {
	int size = 0;

	int arr[50];

	// Read in the values into an array
	cout << "Enter size of array: ";
	cin >> size;

	for(int i = 0; i < size; i++) cin >> arr[i];

	sortArray(arr,size);




	return 0;
}

int countOccurances(int *arr, int size, int n) {
	for(int i = 0; i < n; i++) {
		int count = 0;
		while(arr[i] == arr[i + 1] && i < size){
			n++;
			i++;
		}
	}
	cout << left << setw(10) << "N" << setw(10) << "Count" << endl;
	cout << left << setw(10) << " " << arr << setw(10) << " " << size << endl;
}

// I used bubble sort since that is covered in the text for this chapter
void sortArray(int *arr, int size) {
	for(int i = 0; i < size; i++){
		for(int j = 0; j <= i; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
