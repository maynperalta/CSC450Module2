#include <iostream>
#include <string>

int main() {
	std::string str1, str2, str3, str4, str5, str6;
	
	std::cout << "Hello. Welcome to the String Concatenation application." << std::endl;
	std::cout << "Please enter a string: ";
	std::cin >> str1;
	std::cout << "Please enter another string: ";
	std::cin >> str2;
	
	std::cout << "String concatenation 1" << std::endl; 
	std::cout << "======================" << std::endl;
	std::cout << str1 + str2 << std::endl;
	
	return 0;
	
	
}
