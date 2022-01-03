#include <iostream>

using namespace std;

int main(){
	
	int a;
	a = 10;
	cout << a << endl;

	int b;
	cout << "masukan nilai : ";
	cin >> b;
	cout << "nilai yang anda masukan adalah: ";
	cout << b << endl;

	cin.get();
	return 0;
}



// ===== RECODE ===== //

using namespace std; // this if for we don't need to write std too much.
int main() {
    int a; // this is a declaration.
    a = 10; // this meaning include 10 into var a.
    cout << a << endl; // this line is nothing std because was shortened by using namespace std.
} 
