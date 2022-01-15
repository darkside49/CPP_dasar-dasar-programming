#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 1;

	do{
		cout << "hore ";
		cout << a << endl;
		a++;
	}while(a <= 10);

	cout << "selesai" << endl;
	cin.get();
	return 0;
}



// ===== RECODE ===== //
int main(){
  int a = 1;
  
  do{
    cout << "hore ";
    cout << a << endl;
    a++;
  }while(a <= 10);
  
  cout << "selesai" << endl;
  getch();
  return 0;
}



// ===== DEVELOPMENT ===== //
  int main(){
    int biner;
    string he = "he";
    
    do{
      cout << "\n" << he << endl;
      cout << "apakah kamu ingin tahu perulangan do while? \n";
      cout << "1 = iya, 0 = tidak, >1 = iya : ";
      cin >> biner;
      he += "he";
    }while(biner == 1 || biner == 0 || biner >= 1);
  }
