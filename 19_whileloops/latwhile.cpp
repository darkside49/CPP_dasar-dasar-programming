#include <iostream>

using namespace std;

int main()
{

	int a = 5;
	
	while(a <= 10){
		cout << "hore ";
		cout << a << endl;
		a += 1;
	}

	cout << "selesai" << endl;

	cin.get();
	return 0;
}



// ===== RECODE ===== //
int main(){
  int a = 5;
  while(a <= 10){
    cout << "a";
    a += 1;
  }
  cout << "selesai" << endl;
  
  getch();
}



// ===== DEVELOPMENT ===== //
int main(){
  int a;
  
  cout << "while loop\n";
  cout << "masukkan nilai awal perulangan mundur (maksimal 10000) : ";     
  cin >> a;
  while(a >= 1 && a <= 10000){
    cout << a << endl;
    a--;
  }
  cout << "program while loop selesai." << endl;
  getch();
}
