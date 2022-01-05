#include <iostream>

using namespace std;

int main(){

	// bilangan bulat
	unsigned int a = 5; // 32-bit
	long b = 6;
	short c = 7;

	// bilangan decimal
	float d = 1.0;
	double e = 2.5;

	// character
	char f = 'a'; //character 1-bit

	// boolean
	bool g = true; // true/false

	cout << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;
	cin.get();
	return 0;
}



// ===== RECODE ===== //
#include <limits> // must include limits for use numeric_limits function
int main(){
	
    // bilangan bulat
    int a = 4; // 4 byte / 32 bit
    long b = 8; // 8 byte / 64 bit
    short c = 2; // 2 byte / 16 bit

    // bilangan desimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = "f"; // character 1 bit
    
    // boolean
    bool g = true; // true/false
	
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; // sizeof is for display/menampilkan size of this datatype.
    cout << numeric_limits<int>::max() << endl; // numeric_limits max is for display max value of this datatype.
    cout << numeric_limits<int>::min() << endl; // same of above but the opposite./kebalikannya
    cin.get();
    return 0;

}



// ===== DEVELOPMENT ===== //

#include <iostream>
#include <limits>

using namespace std;

int main(){
    // bilangan bulat
    int a = 4; // 4 byte / 32 bit
    long b = 8; // 8 byte / 64 bit
    short c = 2; // 2 byte / 16 bit

    // bilangan desimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'f'; // character 1 bit
    
    // boolean
    bool g = true; // true/false
  
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(d) << " byte" << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(e) << " byte" << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(f) << " byte" << endl;
    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<char>::min() << endl;
    cout << "\n\n\n" << endl;
    
    cout << sizeof(g) << " byte" << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;
    cout << "\n\n\n" << endl;
    cin.get();
    return 0;
}



