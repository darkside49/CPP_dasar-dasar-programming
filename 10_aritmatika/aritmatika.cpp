#include <iostream>

using namespace std;

int main(){

  int a = 6;
  int b = 4;
  int hasil;
  // operatornya +, -, *, /, %
  // penjumlahan
  hasil = a + b;
  cout << a << " + " << b << " = " << hasil << endl;

  // pengurangan
  hasil = a - b;
  cout << a << " - " << b << " = " << hasil << endl;

  // perkalian
  hasil = a * b;
  cout << a << " x " << b << " = " << hasil << endl;

  // pembagian
  hasil = a / b;
  cout << a << " / " << b << " = " << hasil << endl;

  // modulus
  hasil = a % b;
  cout << a << " % " << b << " = " << hasil << endl;

  // urutan eksekusi;

  hasil = a + b * a;
  cout << hasil << endl; 

  cin.get();
  return 0;
}



// ===== RECODE ===== //

int main(){
    int a = 7;
    int b = 3;
    int hasil;
    
    /* operatornya +, -, *, /, % 
       (tambah, kurang, kali, bagi, sisa bagi /
        plus, minus, multiple, divide, modulus )
    
    */
    // penjumlahan / plus
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    
    // pengurangan / minus
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    
    // perkalian / multiple
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;
    
    // pembagian / divide
    hasil = a / b; // in divide, var hasil datatype must be changed
    // from int to float or double. the same of var a or b..
    cout << a << " ÷ " << b << " = " << hasil << endl;
    
    // sisa bagi / modulus
    hasil = a % b; // in modulus, datatype var a and b must same. example: int with int.
    cout << a << " % " << b << " = " << hasil << endl;
    
    return 0;
}



// ===== DEVELOPMENT ===== //

int main(){
    
    // area of ​​triangle = 1/2 × base × height
    int large;
    int base;
    int height;
    cout << "area of ​​triangle = 1/2 × base × height" << endl;
    cout << "enter base : ";
    cin >> base;
    cout << "large = 1/2 × " << base << " × height" << endl;
    cout << "enter height : ";
    cin >> height;
    large = 0.5 * base * height;
    cout << "large = 1/2 × " << base << " × " << height << " = " << large << endl;
    
    return 0;
}






