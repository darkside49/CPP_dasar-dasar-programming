#include <iostream>

using namespace std;

int main()
{

	// assignment
	int a = 10;

	cout << "nilai awal dari a adalah: " << a << endl;

	// assignment operator
	// variabel = variabel operator ekspresi
	//     a.   =.   a.      -       3
	// variabel operator= ekspresi
	//     a.      +=.       3    

	a += 3;
	cout << "ditambah 3 menjadi " << a << endl;

	a -= 3;
	cout << "dikurangi 3 menjadi " << a << endl;

	a /= 3;
	cout << "dibagi 3 menjadi " << a << endl;

	a *= 3;
	cout << "dikali 3 menjadi " << a << endl;

	a %= 3;
	cout << "dimodulus 3 menjadi " << a << endl;	

	cin.get();
	return 0;
}


// ==== RECODE ==== //
int main(){
    // assignment
    int a = 10;
    cout << "nilai awal dari a adalah: " << a << endl;
    
    // assignment operator
    // variabel = variabel operator ekspresi
    //       a       =        a            -                3;
    // variabel operator =    ekspresi
    //       a                +=                3;
    
    a += 3;
    cout << "ditambah 3 menjadi " << a << endl;
    
    a -= 3;
    cout << "dikurangi 3 menjadi " << a << endl;
    
    a *= 3;
    cout << "dikali 3 menjadi " << a << endl;
    
    a /= 3;
    cout << "dibagi 3 menjadi " << a << endl;
    
    a%= 3;
    cout << "dimodulus 3 menjadi " << a <<    endl;
    getch();
    return 0;
}



// ===== DEVELOPMENT ===== //
int main(){
    float a, b, c;
    char y;
    cout << "penjumlahan sederhana\n";
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << a << " + " << "b? \n";
    cout << "masukkan nilai b : ";
    cin >> b;
    c += a;
    c += b;
    cout << "hasil penjumlahan dari " << a << " + " << b;
    cout << " = " << c << "\n";
    cout << "apakah anda ingin melanjutkan penjumlahan lagi? (y\/n)";                      
    cin >> y;
    if( y== 'y'){
      cout << "yes";
    } else if(y == 'n'){
      cout << "no";
    } else{
      cout << "pilih huruf y atau n";
    }
    
    getch();
}

