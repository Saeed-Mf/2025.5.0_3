//program by Saeed manafi


#include <iostream>

using namespace std;

int main() {
	string cpassword = "pass1234";
	int att = 0;
	const int maxatt = 3;
	while (att < maxatt) {
		cout << "***enter your password!***\n\n"<<endl;
		string password;
		cin >> password;
		if (password == cpassword) {
			cout << "Acces granted\n\n";
			return 1;
		}
		else
			cout << "**worng password try agin!**\n\n";
		att++;
	}
	cout << "**too many att ! acces denied.**\n\n";

	return 0;
}