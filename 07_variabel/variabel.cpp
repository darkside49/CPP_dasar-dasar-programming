#include <iostream>

int main(){

	int a = 5; // int = integer is bilangan bulat

	std::cout << a << std::endl;
	std::cin.get();
	return 0;
}



// ===== RECODE ===== //
int main() {
    int a = 5; // include 5 in the var a which has integer datatype
    std::cout << a << std::endl; // because datatype of a is integer, so a doesn't need a string.
    std::cin.get();
    return 0;
}



// ===== DEVELOPMENT ===== //
int main() {
    int a;
    int b;
    int c;
    std::cout << "welcome to addition operation \n";
    std::cout << "example : a + b = 1 + 2 = 3" << std::endl;
    std::cin >> a >> std::endl;
    std::cin >> b >> std::endl;
    c = a + b;
    std::cout << "the addition of ";
    std::cout << a;
    std::cout << " + ";
    std::cout << b;
    std::cout << " = ";
    std::cout << c << std::endl;
    std::cin.get();
    return 0;
}
//fail
