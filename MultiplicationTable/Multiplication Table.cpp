/* Multiplication Table
*  Carter McCall
*  15 September 2022
*  Purpose:
*		Create a multiplication table
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int max;
	do {
		cout << "What would you like the max number to be on the multiplication table? (6-22): ";
		cin >> max; 
	} while (max > 22 && max < 6);
	cout << max << " by " << max << " Multiplication Table:" << endl;
	for (int i = 1; i <= max; i++) {
		for (int j = 1; j <= max; j++) {
			cout << setw(4) << i * j;
		}
		cout << "\n";
	}
}