#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "masukan nilai = ";
	cin >> a;

	switch(a){
		case 1:
			cout << "a = 1" << endl;
			break;
		case 2:
			cout << "a = 2" << endl;
		case 3:
			cout << "a = 3" << endl;
		case 4:
			cout << "a = 4" << endl;
		case 5:
			cout << "a = 5" << endl;
		default:
			cout << "default" << endl;
	}

	cout << "akhir dari program" << endl;

	return 0;
}



// ===== RECODE ===== //
int main(){
  int a;
  cout << "masukkan nilai = ";
  cin >> a;
  
  switch(a){
    case 1:
        cout << "a = 1" << endl;
        break;
    case 2:
        cout << "a = 2" << endl;
        break;
    case 3:
        cout << "a = 3" << endl;
        break;
    case 4:
        cout << "a = 4" << endl;
        break;
    case 5:
        cout << "a = 5" << endl;
        break;
    default:
        cout << "default" << endl;
        
  }
  cout << "akhir dari program" << endl;
  return 0;
}



// ===== DEVELOPMENT ===== //
int main(){
    int pilihan;
    cout << "pilih menu makanan kesukaanmu:\n";
    cout << "contoh :\n pizza = 1\n burger = 2\n mie ayam = 3\n sate ayam = 4\n";      
    cin >> pilihan;
    
    switch(pilihan){
      case 1:
          cout << "pesanan pizza segera siap" << endl;
          break;
      case 2:
          cout << "pesanan burger segera siap" << endl;
          break;
      case 3:
          cout << "pesanan mie ayam segera siap" << endl;
          break;
      case 4:
          cout << "pesanan sate ayam segera siap" << endl;
          break;
      default:
          cout << "mohon pilih makanan yang ada di daftar menu:)" << endl;   
    }
    cout << "akhir dari program" << endl;
    return 0;
    
}
