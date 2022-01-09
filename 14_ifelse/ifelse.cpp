#include <iostream>

using namespace std;

int main(){

	int a;

	cout << "masukan angka = ";
	cin >> a;

	if (a == 5){
		cout << "nilai ini adalah 5" << endl;
	} else if (a == 3){
		cout << "nilai ini adalah 3" << endl;
	} else if (a == 1){
		cout << "nilai ini adalah 1" << endl;
	} else {
		cout << "bukan 5,3, atau 1" << endl;
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
  if (a == 5) {
    cout << "nilai ini adalah 5" << endl;
  } else if (a == 3) {
    cout << "nilai ini adalah 3" << endl;
  } else if (a == 1) {
    cout << "nilai ini adalah 1" << endl;
  } else {
    cout << "bukan nilai 5,3, atau 1" << endl;
  }
  
  cout << "selesai" << endl;
  cin.get();
  return 0;
}



// ===== DEVELOPMENT ===== //
int main() {
  
  int umur;
  
  cout << "Mesin penentu kategori umur \n";
  cout << "berapakah umur anda? ";
  cin >> umur;
  
  if (umur <= 5) {
    cout << "anda masih balita" << endl;
  } else if ((umur > 5) && (umur <= 13)) {
    cout << "anda masih anak-anak" << endl;
  } else if ((umur > 13) && (umur <= 17)) {
    cout << "anda sudah remaja" << endl;
  } else if ((umur > 17) && (umur <= 59)) {
    cout << "anda sudah dewasa" << endl;
  } else if ((umur > 59) && (umur <= 100)) {
    cout << "anda sudah tua / lansia" << endl;
  } else if (umur > 100) {
    cout << "anda adalah manusia langka" << endl;
  } else {
    cout << "anda masih hidup" << endl;
  }
  
  cout <<"selesai" << endl;
  return 0;
}
