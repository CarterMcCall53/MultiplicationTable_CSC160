/* Multiplication Table
*  Carter McCall
*  15 September 2022
*  Purpose:
*		Create a multiplication table
*  Modified 16 September 2022:
*		Added extra do-while loop at line 19 because there were errors
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string input;
	char repChar;
	int max = 0;
	do {
			do {
				cout << "What would you like the max number to be on the multiplication table? (6-22): ";
				cin >> max;
			} while (max < 6 || max > 22);
		cout << max << " by " << max << " Multiplication Table:" << endl;
		for (int i = 1; i <= max; i++) {
			for (int j = 1; j <= max; j++) {
				cout << setw(4) << i * j;
			}
			cout << "\n";
		}
		cout << "\nDo you want to see another table? (Y|N): ";
		cin >> input;
		repChar = tolower(input[0]);
	} while (repChar == 'y' && repChar != 'n');
}