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
	cout << "12 x 12 Multiplication Table:\n";
	const int MAX = 12;
	for (int i = 0; i <= MAX; i++) {
		for (int j = 0; j <= MAX; j++) {
			cout << setw(4) << i * j;
		}
		cout << "\n";
	}
}