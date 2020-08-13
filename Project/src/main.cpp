#include <iostream>
#include "../include/my_math.h"
using namespace std;

int main()
{   
    int n = 5;
    int a = 3;
    int b = 2;
    
    cout << "Fatorial de 5: " << fatorial(n) << endl;
    cout << "Area do quadrado: com lado " << n << ": " << area_quadrado(n) << endl;
    cout << "Area do retangulo com altura " << a << " e base " << b << ": " << area_retangulo(a, b)  << endl;
    
    return 0;   
}