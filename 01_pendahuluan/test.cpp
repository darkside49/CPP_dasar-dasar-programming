#include <iostream>

//comment
/* multi
line
comment
*/

int main()
{
	int a;
	std::cout << "halo kalian" << std::endl;
	std::cin >> a;
	std::cout << a << std::endl;
	return 0;
}



//
//==========RECODE()==========
//



#include <iostream> /* include is masukkan all program <target>,
<iostream> is a "input output stream" or "target device type"
example this device target type is windows, linux, or macos.
stream is this device or this windows.
*/
//comment
/*
multiline comment
*/

int main() //main door for enter the house, the house is synonym of this program
{
    int a; // int is a data type
    std::cout << "hi" << "its me" << std::endl; /* is standard library from <iostream>,
    std exist because it come from <iostream>,
    cout is "console out",
    << "hi" << is put "hi" into cout,
    std::endl; is end of this line code,
    endl is end line.
    */
    std::cin >> a; // cin is console in.
    std::cout << a << std::endl;
    return 0; // return is for data type int
}



//
//==========DEVELOPMENT()==========
//

/* FAIL DEVELOPMENT
int mainDevelopment()
{
    int myName;
    std::cout << "Development" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "What is your name? " << std::end;
    std::cin >> myName;
    std::cout << "Hi " << myName << ", nice to meet you." << std::endl;
    return: 0;
}
*/





















