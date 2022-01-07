#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 2;

	bool hasil1, hasil2;

	// komparasi, relation expression

	// sebanding ==
	hasil1 = (a == b); 
	// tidak sebanding !=
	hasil2 = (a != b); 

	// kurang dari
	hasil1 = (a < b); 
	// lebih dari
	hasil2 = (a > b); 

	// kurang dari sama dengan
	hasil1 = (a <= b); 
	// lebih dari sama dengan
	hasil2 = (a >= b); 
		
	cout <<  hasil1 << endl;
	cout <<  hasil2 << endl;

	cin.get();
	return 0;
}



// ===== RECODE ===== //

int main(){
    
    int a = 2;
    int b = 2;
    
    bool hasil1, hasil2;
    
    // komparasi, relation expression
	
    // sebanding / ==
    hasil1 = (a == b);
    // tidak sebanding / !=
    hasil2 = (a != b);
    
    // kurang dari
    hasil1 = (a < b);
    // lebih dari
    hasil2 = (a > b);
    
    // kurang dari samadengan
    hasil1 = (a <= b);
    // lebih dari samadengan
    hasil2 = (a >= b);
    
    cout << hasil1 << endl;
    cout << hasil2 << endl;
}



// ===== DEVELOPMENT ===== //
    
int bulean(bool hasil) {
  if (hasil == 1){
    cout << "jawabannya adalah true / benar" << endl;
  } else if (hasil == 0){
    cout << "jawabannya adalah false / salah" << endl;
  } else {
    cout << "error";
  }
}

int main(){
    int a = 3;
    int b = 2;
    
    bool hasil, hasil1, hasil2;
    
    // komparasi, relation expression
  
    // sebanding / ==
    hasil1 = (a == b);
    // tidak sebanding / !=
    hasil2 = (a != b);
    cout << " apakah " << a << " == " << b << " ? ";
    hasil = hasil1;
    bulean(hasil);
    cout << " apakah " << a << " != " << b << " ? ";
    hasil = hasil2;
    bulean(hasil2);
    
    // kurang dari
    hasil1 = (a < b);
    // lebih dari
    hasil2 = (a > b);
    cout << " apakah " << a << "  < " << b << " ? ";
    hasil = hasil1;
    bulean(hasil);
    cout << " apakah " << a << "  > " << b << " ? ";
    hasil = hasil2;
    bulean(hasil2);
    
    // kurang dari samadengan
    hasil1 = (a <= b);
    // lebih dari samadengan
    hasil2 = (a >= b);
    
    cout << " apakah " << a << " <= " << b << " ? ";
    hasil = hasil1;
    bulean(hasil);
    cout << " apakah " << a << " >= " << b << " ? ";
    hasil = hasil2;
    bulean(hasil2);
}
