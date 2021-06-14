/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using namespace std;

int main(void)
{
    // TODO: Adicione seu código aqui.

    long long m, n, i, soma = 0, soma2 = 0;
    int x;

    while (cin >> ws >> n >> ws >> m)
    {
        if (m > 0)
        {
            for (i = n; i < n + m; i++)
            {
                soma += i;
            }
            cout << soma << "\n";
            soma = 0;
        }
        else if (m < 0)
        {
            for (i = n; i >= (n + (m + 1)); i--)
            {
                soma += i;
            }
            cout << soma << "\n";
            soma = 0;
        }
        else
        {
            soma += n;
            cout << soma << "\n";
            soma = 0;
        }
    }

    return 0;
}