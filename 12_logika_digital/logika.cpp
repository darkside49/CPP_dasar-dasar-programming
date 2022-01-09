#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil; 

	// operator logika : not, and, or

	// not
	hasil = !(a == 3);

	// and : kedua nilai benar untuk menghasilkan true

	cout << "untuk and \n";
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // false and false
	cout << hasil << endl;

	// or : salah satu nilai true maka hasil true
	cout << "untuk or \n";
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 3); // false and false
	cout << hasil << endl;


	cin.get();
	return 0;
}



// ===== RECODE ===== //
int main()
{
    int a = 3;
    int b = 2;
  
    bool hasil;
  
    // operator logika : or, not, and
  
    // not
    hasil = !(a == 3);
  
    // and : kedua nilai harus benar untuk menghasilkan true         
    cout << "untuk and \n";
    hasil = (a == 3) and (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 4) and (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) and (b == 3); // true && false
    cout << hasil << endl;
    hasil = (a == 4) and (b == 3); // false && false
    cout << hasil << endl;

    // or : salah satu nilai harus benar untuk menghasilkan true         
    cout << "untuk or \n";
    hasil = (a == 3) or (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3); // true && false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3); // false && false
    cout << hasil << endl;
}



// ===== DEVELOPMENT ===== //

int main() {
  
  string username, username_real;
  bool benar;
  int pin, pin_real;
  
  username_real = username;
  pin_real = 1234;
  
  cout << "SELAMAT DATANG DI ADMINISTRASI JARINGAN \n";
  cout << "SILAHKAN MASUKKAN USERNAME DAN PIN UNTUK LOGIN \n";
  cout << "USERNAME : ";
  cin >> username;
  cout << "PIN : ";
  cin >> pin;
  
  benar = (username == username_real) and (pin == pin_real);
  
  if(benar == 1){
    cout << "SELAMAT! ANDA BERHASIL LOGIN" << endl;
  } else if(benar == 0){
    cout << "username / pin yang anda masukkan salah!" << endl;
  } else {
    cout << "udah sholat belum?" << endl;
  }
  
}
