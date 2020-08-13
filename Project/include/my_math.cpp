// Esse módulo contém funções matemáticas

int fatorial(int n)
{
    int resultado = 1;
    for(int i = n; i > 0; i--)
    {
        resultado *= i; 
    }
    return resultado;   
}

int area_quadrado(int lado)
{
    return lado * lado;
}

int area_retangulo(int altura, int base)
{
    return altura * base;
}