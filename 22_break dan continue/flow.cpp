#include <iostream>

using namespace std;

int main(){
	
	int i = 0;
	while(i <= 10){
		i++;
		if(i == 5){
			continue;
			//break;
		}
		cout << i << endl;
		
	}

	cout << "akhirnya" << endl; 

	cin.get();
	return 0;
}



// ===== RECODE ===== //
int main(){
  int i = 0;
  while(i <= 10){
    i++;
    if(i == 5){
      continue;
      //break;
    }
    cout << i << endl;
  }
  
  cout << "akhirnya" << endl;
  
  getch();
  return 0;
}



// ===== DEVELOPMENT ===== //

#include <string>

int main(){
  string jawaban;
  cout << "apakah anda sehat?";
  cin >> jawaban;
  if(jawaban == "iya"){
    string kuat;
    cout << "apakah anda kuat?";
    cin >> kuat;
    if(kuat == "iya"){
      cout << "anda lolos:)" << endl;
    } else if(kuat == "tidak"){
      cout << "anda lemah:(" << endl;
    } else{
      cout << "anda harus menjawab antara iya & tidak. selain itu maka anda salah" << endl;      
    }
  } else if(jawaban == "tidak"){
    cout << "anda harus ke rumah sakit" << endl;
  } else{
    cout << "anda sanggaatt ppiinnttaarr:)" << endl;
  }
  while(true){
    break;
  }
  cout << "selesai" << endl;
  return 0;
}

  
