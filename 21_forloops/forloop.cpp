#include <iostream>

using namespace std;

int main()
{
	
	cout << "Loop 1 \n"; 
	for(int i = 1; i <= 10; i++){
		cout << i << endl; 
	}

	cout << "\n Loop2 \n";
	for(int i = 1; i <= 10; i += 2 ){
		cout << i << endl; 
	}

	cout << "\n Loop3 \n";
	for(int i = 1; i >= -10; i-- ){
		cout << i << endl; 
	}

	cout << "\n Loop4 \n";

	int total = 0;
	for(int i = 1; i <= 10; i++, total += i){
		cout << i << " || " << total << endl; 
	}


	return 0;
}



// ===== RECODE ===== //
int main(){
  cout << "Loop 1 \n";
  for(int i = 1; i <= 10; i++){
    cout << i << endl;
  }
  
  cout << "\n Loop 2 \n";
  for(int i = 1; i <= 10; i+= 2){
    cout << i << endl;
  }
  
  cout << "\n Loop 3 \n";
  for(int i = 1; i >= -10; i--){
    cout << i << endl;
  }
  
  int total = 0;
  cout << "\n Loop 4 \n";
  for(int i = 1; i <= 10; i++, total += i){
    cout << i << " || " << total << endl;
  }
}



// ===== DEVELOPMENT ===== //
int main(){
  int jumlah;
  cout << "for loop\n";
  cout << "anda ingin berapa putaran penjumlahan dan pengurangan?\n";   
  cin >> jumlah;
  for(int tambah = jumlah, kurang = -tambah; tambah >= jumlah && kurang <= jumlah; tambah++, kurang++){
    cout << "putaran ke " << tambah << " || putaran ke " << kurang << endl;
    if(kurang == jumlah){
      break;
  }
  getch();
  return 0;
}
