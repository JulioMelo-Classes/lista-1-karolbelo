/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main( void )
{
    // TODO: Adicione seu código aqui. 
    int num1, num2, count;
    int soma;
    cout << "Digite os dois valores" << endl;
    cin >> num1;
    cin >> num2;

    for (int i = 0; i < num2; i++)
     {  
        count = count + 1;
        soma = num1 + (count +i);
     }
    cout << soma <<endl;


    return 0;
}
