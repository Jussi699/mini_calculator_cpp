#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>  
using namespace std;

int factorial(int n) {
	int result = 1;

	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

double log_base(double x, double base) {
	return log(x) / log(base);
}

int main() {
	int option = 0;

	do {
		int value_int_1 = 0, value_int_2 = 0;
		double value_double_1 = 0.0, value_double_2 = 0.0;
		double sum = 0.0;

		cout << "Enter 1 for ( + )\n"	  << "Enter 2 for ( - )\n"    << "Enter 3 for ( * )\n"    << "Enter 4 for ( / )\n"      << "Enter 5 for ( x^y )\n" << "Enter 6 for ( ! )\n";
		cout << "Enter 7 for ( 1/x )\n" << "Enter 8 for ( % )\n" << "Enter 9 for ( sqrt )\n" << "Enter 10 for ( log )\n" << "Enter 11 for (x^10)\n" << "Enter 12 for ( M_PI )\n";
		cout << "Enter 0 for STOP\n" << '\n';
		cout << "You choice: ";
		cin >> option;
	
		switch (option) {
		case 1:
			sum = 0;

			cout << "Write 2 numbers: ";
			cin >> value_double_1 >> value_double_2;
			sum = value_double_1 + value_double_2;
			cout << "Result: " << sum << endl;
			break;

		case 2:
			sum = 0;
			cout << "Write 2 numbers";
			cin >> value_double_1 >> value_double_2;
			sum = value_double_1 - value_double_2;
			cout << "Result: " << sum  << endl;
			break;

		case 3:
			sum = 0;

			cout << "Write 2 numbers: ";
			cin >> value_double_1 >> value_double_2;
			sum = value_double_1 * value_double_2;
			cout << "Result: "  << sum  << endl;
			break;

		case 4:
			sum = 0;

			cout << "Write 2 numbers: ";
			cin >> value_double_1 >> value_double_2;

			if (value_double_2 == 0) {
				cout << "Sorry, division by 0 is not possible" << endl;
				break;
			}
			else if (value_double_1 == 0) {
				cout << "Result: " << 0 << endl;
				break;
			}
			else {
				sum = value_double_1 / value_double_2;

				cout << "Result: " << sum << endl;
			}
				break;
			
		case 5:
			sum = 0;

			cout << "Write 2 numbers: ";
			cin >> value_int_1 >> value_int_2;
			sum = pow(value_int_1, value_int_2);
			cout << "Result: "<< sum  << endl;
			break;

		case 6:
			sum = 0;

			cout << "Write number: ";
			cin >> value_int_1;
			cout << "Result: " << factorial(value_int_1)  << endl;
			break;

		case 7:
			sum = 0;

			cout << "Write number: ";
			cin >> value_double_1;
			sum = 1 / value_double_1;
			cout << "Result: " << sum<< endl;
			break;

		case 8:
			sum = 0;

			cout << "Write first numbers for a percentage and second number for where will we get the percentage " << endl;
			cin >> value_int_1 >> value_int_2;
			sum = value_int_2 * (static_cast<double>(value_int_1) / 100.0);
			cout << "Result: "  << sum  << endl;
			break;

		case 9:
			sum = 0;

			cout << "Write the degree of the root (e.g., 2 for square root, 3 for cube root, etc.): ";
			cin >> value_int_1;

			cout << "Write the number from which to extract the root: ";
			cin >> value_double_1;

			if (value_int_1 > 0) {
				sum = pow(value_double_1, 1.0 / value_int_1);
			}
			else {
				cout << "Invalid root degree. It should be a positive number.\n";
			}
			cout << "Result: " << sum << endl;
			break;

		case 10:
			option = 0;

			cout << "\nChoose the option!! \n";
			cout << "1. Logarithm on the base 10 (log10)\n";
			cout << "2. Natural logarithm (ln)\n";
			cout << "3. Logarithm on an arbitrary base \n";
			cout << "You choice: ";
			cin >> option;

			switch (option) {
			case 1:
				cout << "Write number: ";
				cin >> value_double_1;
				if (value_double_1 > 0) {
					cout << "log10(" << value_double_1 << ") = " << log10(value_double_1) << endl;
				}
				else {
					cout << "The number should be more than zero!\n";
				}
				break;

			case 2:
				cout << "Write number: ";
				cin >> value_double_1;
				if (value_double_1 > 0) {
					cout << "ln(" << value_double_1 << ") = " << log(value_double_1) << endl;
				}
				else {
					cout << "The number should be more than zero!\n";
				}
				break;

			case 3:
				cout << "Write number: ";
				cin >> value_double_1;
				cout << "Write base: ";
				cin >> value_double_2;

				if (value_double_1 > 0 && value_double_2 > 1) {
					cout << "log_" << value_double_2 << "(" << value_double_1 << ") = " << log_base(value_double_1, value_double_2) << endl;
				}
				else {
					cout << "The number and base should be positive, and the base cannot be equal to 1.\n";
				}
				break;

			 default:
				 cout << "Bad choice!\n";
				break;
			}
			break;

		case 11: 
			sum = 0;

			cout << "Write number: ";
			cin >> value_double_1;
			sum = pow(value_double_1, 10);
			cout << "Result: " << sum  << endl;
			break;
			
		case 12:
			option = NULL;

			cout << "Enter 1 for ( + )\n"   << "Enter 2 for ( - )\n"     << "Enter 3 for ( * )\n" << "Enter 4 for ( / )\n" << "Enter 5 for ( M_PI^x )\n" << "Enter 6 for ( x^M_PI )\n";
			cout << "Enter 7 for ( sin )\n" << "Enter 8 for ( cos )\n";
			cout << "Enter you choice: ";
			cin >> option;

				switch (option){
				case 1:
					cout << "Write number: ";
					cin >> value_double_1;
					sum = value_double_1 + M_PI;
					cout << "Result: " << sum << endl;
					break;

				case 2:
					cout << "Write number: ";
					cin >> value_double_1;
					sum = value_double_1 - M_PI;
					cout << "Result: " << sum << endl;
					break;

				case 3:
					cout << "Write number: ";
					cin >> value_double_1;
					sum = value_double_1 * M_PI;
					cout << "Result: " << sum << endl;
					break;

				case 4:
					cout << "Write number: ";
					cin >> value_double_1;
					sum = value_double_1 / M_PI;
					cout << "Result: " << sum << endl;
					break;

					case 5:
					cout << "Write number: ";
					cin >> value_int_1;
					sum = pow(M_PI, value_int_1);
					cout << "Result: " << sum << endl;
					break;

					case 6:
						cout << "Write number: ";
						cin >> value_int_1;
						sum = pow(value_int_1, M_PI);
						cout << "Result: " << sum << endl;
						break;
						
					case 7:
						cout << "Write number: ";
						cin >> value_double_1;
						sum = sin(value_double_1 * M_PI);
						cout << "Result: " << sum << endl;
						break;
						
					case 8:
						cout << "Write number: ";
						cin >> value_double_1;
						sum = cos(value_double_1 * M_PI);
						cout << "Result: " << sum << endl;
						break;

				default:
					cout << "Invalid operation!" << endl;
					break;
				}
			break;

		case 0:
			break;

		default:
			cout << "Invalid option. Try again."  << endl;
		}

		cout << '\n';
	} while (option != 0);
	return 0;

}
