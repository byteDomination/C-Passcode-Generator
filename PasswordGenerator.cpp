#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main() {
	int num; // num storing user input

	const char characters[] = "abcdefghijklmnopqrstuvwxyz" //all types of character stored in char array
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"1234567890"
		"~!@#$%^&*()_+{}|:\"?><"
		"`[]-=\\';/.,";

	cout << "Enter Password length (note has to be positive):";
	cin >> num;

	while (num < 0) {
        cout << "Enter Password length (positive)";
	    cin >> num;
    }

    cout << "Generated password:"; 

	for (int i = 0; i < num; i++) {
        cout << characters[rand() % 95];
	}

	return 0;
}

