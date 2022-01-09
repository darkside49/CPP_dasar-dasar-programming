#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "masukan angka = ";
	cin >> a;

	// if statement
	// kondisi dalam bentuk boolean
	if (a == 5)
	{
		cout << "halooo" << endl;
	}

	cout << "selesai" << endl;
	cin.get();
	return 0;
}



// ===== RECODE ===== //

int main(){
  int a;
  
  cout << "masukkan angka = ";
  cin >> a;
  
  // if statement
  // kondisi dalam bentuk boolean
  if (a == 5) {
    cout << "halooo" << endl;
  } else {
    cout << "hai" << endl;
  }
  
  cout << "selesai" << endl;
  cin.get();
  return 0;
}



// ===== DEVELOPMENT ===== //
int main(){
  int angka;
  
  cout << "masukkan angka 5 =";
  cin >> angka;
  
  if(angka == 5) {
    cout << "angka yang anda masukkan benar" << endl;
  } else {
    cout << "angka yang anda masukkan salah" << endl;
  }
  cin.get();
  return 0;
}
