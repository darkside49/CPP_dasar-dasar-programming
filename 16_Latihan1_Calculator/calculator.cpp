#include <iostream>

using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "Selamat datang di program calculator \n \n";

	// memasukan input dari user
	cout << "Masukan nilai pertama: ";
	cin >> a;
	cout << "Pilih operator +,-,/,*: ";
	cin >> aritmatika;
	cout << "Masukan nilai kedua: ";
	cin >> b;

	cout << "\nHasil perhitungan: ";
	cout << a << aritmatika << b;

	if (aritmatika == '+'){
		hasil = a + b;
	} else if (aritmatika == '-'){
		hasil = a - b;
	} else if (aritmatika == '/'){
		hasil = a / b;
	} else if (aritmatika == '*'){
		hasil = a * b;
	} else {
		cout << "operator anda salah" << endl;
	}

	cout << " = " << hasil << endl;

	cin.get();
	return 0;
}



// ===== RECODE ===== //
int main(){
    float a, b, hasil;
    char aritmatika;
    
    cout << "Selamat datang di program calkulator\n\n";
    
    // memasukkan input dari user
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "pilih operator +, -, *, /: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;
    
    cout << "\nHasil perhitungan : ";
    cout << a << aritmatika << b;
    
    if(aritmatika == '+'){
      hasil = a + b;
      cout << " = " << hasil << endl;
    } else if(aritmatika == '-'){
      hasil = a - b;
      cout << " = " << hasil << endl;
    } else if(aritmatika == '*'){
      hasil = a * b;
      cout << " = " << hasil << endl;
    } else if(aritmatika == '/'){
      hasil = a / b;
      cout << " = " << hasil << endl;
    } else {
      cout << "operator anda salah" << endl;
    }
    
    cin.get();
    return 0;
}



// ===== DEVELOPMENT =====    //
int main(){
    float a,b,hasil;
    char operatol;
    
    cout << "selamat datang di program kalkulator sederhana.\n\n";
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "masukkan operator +,-,*,/ : ";
    cin >> operatol;
    cout << "masukkan angka kedua : ";
    cin >> b;
    switch(operatol){
        case '+':
            hasil = a + b;
            cout << "hasil penjumlahan dari ";
            cout << a <<" " << operatol << " " << b;
            cout << " = " << hasil << endl;
            break;
        case '-':
            hasil = a - b;
            cout << "hasil pengurangan dari ";
            cout << a <<" " << operatol << " " << b;
            cout << " = " << hasil << endl;
            break;
        case '*':
            hasil = a  * b;
            cout << "hasil perkalian dari ";
            cout << a <<" " << operatol << " " << b;
            cout << " = " << hasil << endl;
            break;
        case '/':
            hasil = a / b;
            cout << "hasil pembagian dari ";
            cout << a <<" " << operatol << " " << b;
            cout << " = " << hasil << endl;
            break;
        default :
            cout << "maaf, sedang error" << endl;
    }
}
