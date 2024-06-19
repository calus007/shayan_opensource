#include <iostream>
#include <string>

bool is_palindrome(std::string str) {
	for (size_t i {0}, j {str.length() - 1}; i < j; ++i, --j)
		if (tolower(str[i]) != tolower(str[j]))
			return false;
	return true;
}

int main() {
	std::cout << "Hello World!" << std::endl;
	for (size_t i {0}; i < 10; i++) {
		std::cout << i << std::endl;
	}
=======
	// std::cout << "Hello World!" << std::endl;
	std::string str {};
	std::cout << "Enter any string: ";
	getline(std::cin, str);
	if (is_palindrome(str))
		std::cout << str << " is a palindrome." << std::endl;
	else
		std::cout << str << " is not a palindrome." << std::endl;
	return 0;
}