# include "iostream"
# include "string.h"
  
  using namespace std;
  
  int  main () {
  char cadena [ 256 ];
  char init, fin;
  int longitud;
  cout << " ingrese la palabra "<<endl ;
  cin >> cadena;
  longitud = strlen (cadena);
  init = cadena [ 0 ];
  for ( int i = 0 ; i <longitud; i ++)
  {
  fin = cadena [i];
  }
  if (init == fin) {cout << " Esta palabra termina con la letra que empieza " ;}
  else {cout << " Esta palabra no terminar con la letra que empieza " ;}
  
  
  return 0;
  }