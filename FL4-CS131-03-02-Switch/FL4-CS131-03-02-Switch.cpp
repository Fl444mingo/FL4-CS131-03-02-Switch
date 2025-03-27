#include <iostream>
#include <string>
using namespace std;
int main() {
	char series;
	cout << "Which Star Trek series? ([O]riginal,[T]NG,[D]S9,[V]oyager)? ";
	cin >> series;
	// You can use a switch to make decisions based on int or char values
	switch (series) {
	case 'O': case'o':
		cout << "Captain: Kirk\n";
		break;
	case 'T': case 't':
		cout << "Captain: Picard\n";
		break;
	case'D': case 'd':
		cout << "Captain: Sisko\n";
		break;
	case 'V': case 'v':
		cout << "Captain: Janeway\n";
		break;
	}
	system("pause");
	return 0;
}