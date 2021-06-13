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
    long long m, n, i, soma = 0;

    cin >> m;
    cin >> n;

    if (n >= -10000 && n <=1000)
    {
    for (i = m; i <= n; i++){

    
        soma += i;
    }
    cout << soma << "\n";
    
    }else
    cout << m << endl;

    return 0;
}

