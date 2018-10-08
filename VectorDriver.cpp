// VectorDriver.cpp
// COSC 2030
// Jeremiah Vaskis
// 10/08/2018
// Lab 04

#include "VectorDriver.h"
#include <iomanip>      // std::setw
#include <algorithm>    // std::sort

using std::setw;

int main() {

	// Part 1
	cout << endl << endl << "__________Part 1__________:" << endl << endl;

	cout << "Created Vector Data(0):" << endl;
	vector<short>Data(0);

	cout << endl;
	cout << "Print All:" << endl;
	print(Data);

	cout << endl << endl;
	cout << "add_numbers(Data):" << endl;
	add_numbers(Data);

	cout << endl;
	cout << "Print All:" << endl;
	print(Data);

	cout << endl << endl;
	cout << "add_numbers(Data):" << endl;
	add_numbers(Data);

	cout << endl;
	cout << "Print All:" << endl;
	print(Data);


	// Part 2
	cout << endl << endl << "__________Part 2__________:" << endl << endl;

	cout << "Print Even:" << endl;
	print_even(Data);


	// Part 3
	cout << endl << endl << "__________Part 3__________:" << endl << endl;

	cout << "Print All:" << endl;
	print(Data);

	cout << endl << endl;

	for (int i = 0; i <= 11; i++) {
		cout << "Is: " << setw(3) << i << " present: ";
		if (is_present(Data, i) == true) {
			cout << setw(3) << "yes" << endl;
		}
		else {
			cout << setw(3) << "no" << endl;
		}
	}


	// Part 4
	cout << endl << endl << "__________Part 4__________:" << endl << endl;

	cout << "Created Custom Unsorted Vector:" << endl;
	vector <short> Data2(0);
	Data2.push_back(4);
	Data2.push_back(9);
	Data2.push_back(1);
	Data2.push_back(2);
	Data2.push_back(7);

	cout << endl << "Print All:" << endl;
	print(Data2);

	cout << endl << endl << "Sorted Data:" << endl;
	sort(Data2.begin(), Data2.end());

	cout << endl << "Print Sort:" << endl;
	print(Data2);

	cout << endl << endl;
	system("pause");
	return 0;
}
