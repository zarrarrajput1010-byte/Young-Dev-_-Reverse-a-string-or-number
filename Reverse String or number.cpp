#include <iostream>
using namespace std;

int main() {
	string str;
	cout << "Enter a string or number: ";
	getline(cin, str);
	
	int n = str.length();
	for(int i = 0; i < n / 2; i++) {
		char temp = str[i];
		str[i] = str[n - 1 -i];
		str[n - 1 - i] = temp;
	}
	
	cout << "Reversed string or number: " << str << endl;
	return 0;
}