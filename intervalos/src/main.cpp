/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(){

    int x;

    while( cin >> std::ws >> x) {
      
  // realização da contagem em relação aos intervalos
    if(x>=0 && x<=25){
      
      cout << setprecision(4) << x * 25;
    }
        
    else if (x>25 && x<=50){

    }
        
    else if (x>50 && x<=75){

    }
        
    else if(x>75 && x<=100){

    }
        
    else
       cout << "Fora do Intervalo";

    }

    return 0;
}