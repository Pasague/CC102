# include <iostream>
using namespace std;
int main () {
	int age;
	cout << "enter your age";
	cin >> age;
	if (age <= 15){
		cout << "to young to drive";
	} else if (age == 16) {
		cout << "better clear the eoad";
	} else if ( age <= 17) {
		cout << "you are getting pretty old";
	}
	return 0;
}
