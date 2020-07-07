#include <iostream>

using namespace std;

int main()
{
    int nota ;
    char nl ;

   /** Este programa convierte notas escolares del 0 - 100 en letras **/

   cout << "quieres traducir letras a notas o notas a letras" <<endl; /* aqui responde  L/N */

   cin >> nl ;

   if (nl == 'L') {
   switch(nl)
      {

   case 'A' :
       cout << "100 - 90" <<endl;
    break;

   case 'B' :
       cout << "89 - 80" <<endl;
    break;

   case 'C' :
       cout << "79 - 70" <<endl;
    break;

   case 'D' :
       cout << "69 - 60" <<endl;
    break;

   case 'F' :
       cout << "59 - 0" <<endl;
    break;

   default:
    cout<< "Letra invalida" <<endl;


      }
       }

   if (nl == 'N'){

    cout << " Ingrese una nota : " ;

    cin >> nota ;

    if( nota > 100 || nota < 0){

        cout << "Nota invalida" <<endl;

    }
    if( nota <= 100 && nota >= 90){

        cout << "Tu nota en letras es A" <<endl;

    }
    if( nota <= 89 && nota >= 80){

        cout << "Tu nota en letras es B" <<endl;

    }
    if( nota <= 79 && nota >= 70){

        cout << "Tu nota en letras es C" <<endl;

    }
    if( nota <= 69 && nota >= 60){

        cout << "Tu nota en letras es D" <<endl;

    }
    if( nota <= 59 && nota >= 0){

        cout << "Tu nota en letras es F" <<endl;

    }
     }


    return 0;
}
