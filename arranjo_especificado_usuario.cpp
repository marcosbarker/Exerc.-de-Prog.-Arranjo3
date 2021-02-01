#include <iostream>
#include <locale> //biblioteca manipulacao de diversas convencoes culturais do utilizador (nessse codigo para acentuacao)
using namespace std;

int main() {
    int num;  

    cout << endl << "   Especifique o tamanho do arranjo: ";
    cin >> num;
    
    int lista[num];
    setlocale(LC_ALL, ""); //setlocale <locale>	 
	for (int i=0; i<num; i++){
    lista[i] = 0;
    }
    
    cout << endl << "            indice   Valor";
    cout <<"\n";
  
    for (int i=0; i<num;i++){
        lista[i];
        cout << "              " << i << "   -" << "   " << lista[i] << "\n";
    }

    return 0;
}



 