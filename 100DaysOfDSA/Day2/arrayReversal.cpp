//solution 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	// Writing output to STDOUT
	vector<int>arr(num);
	for(int i = 0; i<num;i++){
		cin>> arr[i];
	}
	for(auto it=arr.rbegin(); it!=arr.rend(); ++it){
		cout<<*it << endl;
	}
	return 0;
}


//solution 2#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;  // Read the size of the array
    int arr[num];  // Declare the array of size 'num'

    // Input loop (corrected to run for num elements)
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    // Output loop in reverse order
    for (int i = num - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    return 0;
}