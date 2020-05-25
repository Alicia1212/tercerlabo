# include "iostream"

  using namespace std;
  int  main () {
  int a;
  int b;
  cout << "ingrese un numero al azar" <<endl;
  cin >> a;
  b = a % 2 ;
  if (b == 0 ) {
  cout << "es un numero par" ;
  }
  
  else {cout << "es un numero impar" ;}
  
  
  return 0;
  }