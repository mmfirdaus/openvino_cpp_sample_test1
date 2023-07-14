// openvino_cpp_mysample_1.cpp : Defines the entry point for the application.
//

#include "openvino_cpp_mysample_1.h"

using namespace std;

int PrintWelcome() {
	cout << "Password Accepted" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Welcome to OpenVINO Version 2023.0.0" << endl;
	cout << "-------------------------------------" << endl;

	return 0;
}

int main()
{
	int pwd;
	string Name = "Megat Firdaus";
	cout << "Hello " + Name << endl;

	cout << "Enter Password" << endl;
	cin >> pwd;
	cout << endl;

	if (pwd == 78) {
		PrintWelcome();
		slog::info << ov::get_openvino_version() << slog::endl;


	}
	else {
		cout << " Wrong Password" << endl;
	}

	return 0;
}
