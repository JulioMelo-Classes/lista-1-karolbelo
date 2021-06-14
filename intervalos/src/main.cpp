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

int main(void)
{

  int x; //entrada

  // variaveis refentes aos intervalos de [0; 25), [25; 50), [50; 75), [75; 100) 
  int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0; 

  float i = 0;

  while (cin >> ws >> x)
  {
    i++;

    if (x >= 0 && x < 25) //intervalo de x > ou = a 0; e x < 25
    {
      valor1++;
    }

    else if (x >= 25 && x < 50)//intervalo de x > 25 = a 0; e x < 50
    {
      valor2++;
    }

    else if (x >= 50 && x < 75) //intervalo de x > ou = a 50; e x < 75
    {
      valor3++;
    }

    else if (x >= 75 && x < 100) //intervalo de x > ou = a 75; e x < 100
    {
      valor4++;
    }

    else //quando x está fora do intervalo de [0; 25), [25; 50), [50; 75), [75; 100)
    {
      valor5++;
    }
  }

  cout << setprecision(4); //precisao do float
  
  cout << (valor1 / i) * 100.0 << std::endl;
  cout << (valor2 / i) * 100.0 << std::endl;
  cout << (valor3 / i) * 100.0 << std::endl;
  cout << (valor4 / i) * 100.0 << std::endl;
  cout << (valor5 / i) * 100.0 << std::endl;

  return 0;
}