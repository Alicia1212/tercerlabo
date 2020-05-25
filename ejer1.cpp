# include "iostream"

  using namespace std;
  int  main () {
  int a;
  int b;
  int c;
  cout << "ingrese el dividendo" <<endl;
  cin >> a;
  cout << "ingrese el divisor" <<endl;
  cin >> b;
  c = a % b;
  if (c == 0 ) {
    cout << " si es divisible" <<endl;
  }
  else {cout << "no es divisible";}
 
 
  return 0;