# include "iostream"

  using namespace std;
  int  main () {
  char string;
  int a;
  int b;
  int palabra;
  int longitud;
  cout << " ingrese la palabra al azar "<< endl ;
  cin >> palabra;
  a = palabra * longitud ;
  cout << " tamanio de la palabra " << a << endl;
  b = a% 2 ;
  if (b == 0 ) {
  cout << " Su longitud es par " ;
  }
  else {cout << " Su longitud es impar " ;}
  return 0;
  }