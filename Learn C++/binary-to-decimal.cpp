#include <iostream>
#include <cmath>

using namespace std;

int binary_to_decimal_iterative(int binary_number) {
	int decimal_number = 0;

	int i = 0;
	while(binary_number) {
		int last_digit = binary_number % 10;
		decimal_number += last_digit * pow(2,i);
		
		binary_number /= 10;
		i++;
	}
	
	return decimal_number;
}

int binary_to_decimal_recursive(int binary_number) {
	if(binary_number == 0) {
		return 0;
	}

	return (binary_number % 10) + 2 * binary_to_decimal_recursive(binary_number / 10);
}

int binary_to_decimal_bitwise(int binary_number) {
	int decimal_number = 0;
    int power = 0;
	
	while(binary_number) {
		int last_bit = binary_number % 10;
        decimal_number = decimal_number | (last_bit << power);
        binary_number /= 10;
        power++;
	}
	
	return decimal_number;
}

int main() {
	int binary_number;

	cout << "Enter a Binary Number to convert it into Decimal Number: ";
	cin >> binary_number;
	
	cout << "Decimal Number from Iterative method: " << binary_to_decimal_iterative(binary_number) << endl;

    cout << "Decimal Number from Recursive method: " << binary_to_decimal_recursive(binary_number) << endl;

    cout << "Decimal Number from Bitwise method: " << binary_to_decimal_bitwise(binary_number) << endl;

	return 0;
}
