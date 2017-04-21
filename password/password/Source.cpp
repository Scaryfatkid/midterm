#include <string>
#include <iostream>
using namespace std;
int main() {
	string input;
	cout << "what ur name" << endl;
	getline(cin, input);
	if (input.compare("Dulce") == 0)
		cout << "guitar hero" << endl;
	else
		cout << "have a nice day" << input
		<< endl;
}
