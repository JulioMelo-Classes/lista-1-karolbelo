#include <iostream>
using std::cin;
using std::cout;
using namespace std;
const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.

    int num, cont=0;
    for (int i = 0; i < SIZE; i++)
    {
        
        cin >> num;
        
        if (num < 0)
        {
            cont = cont+1;   
        }
    }
        cout << cont << endl;
    
    return 0;
}
