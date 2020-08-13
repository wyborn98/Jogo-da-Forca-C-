// Esse módulo contém funções necessárias para o funcionamento do jogo.

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>
#include <ctype.h>

using namespace std;

const int num_palavras = 10;

char BancoPalavras[num_palavras][30] = 
{
    "amor",
    "bateria",
    "cachorro",
    "diferente",
    "especial",
    "familia",
    "garganta",
    "horario",
    "inseto",
    "joia"
};

char jogar;
char palavra_sorteada[30];
char palavra_digitada[30];
char letras_digitadas[26];
char letra;
int contador_letras;
int contador_erros;

int sorteia()
{   
    srand(time(NULL));
    return rand() % (num_palavras);    
}

void imprimir_palavra()
{   
    cout << "    " << strlen(palavra_sorteada) << " letras \n\n    ";

    for(int i = 0; i < strlen(palavra_sorteada); i++)
    {
        cout << palavra_digitada[i] << " ";
    }
}

void copia_palavra(int indice)
{
    for(int i = 0; i < strlen(BancoPalavras[indice]); i++)
    {
        palavra_sorteada[i] = BancoPalavras[indice][i];
    }
}

void limpar_campos()
{       
    for(int i = 0; i < strlen(palavra_sorteada); i++)
    {
        palavra_digitada[i] = '_';
    }
}

void imprimir_corpo(int erros)
{
    switch(erros)
    {   
        case 0:
            cout << " _____________" << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;            
        break;

        case 1:
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;

        break;

        case 2:
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|           | " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
        break;

        case 3:
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|          /| " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
        break;

        case 4:            
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|          /|\\" << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;

        break;

        case 5:
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|          /|\\ " << endl;
            cout << "|          /  " << endl;
            cout << "|             " << endl;
        break;

        case 6:
            cout << " _____________" << endl;
            cout << "|           0 " << endl;
            cout << "|          /|\\ " << endl;
            cout << "|          / \\ " << endl;
            cout << "|             " << endl;
        break;
    }
}

bool verifica_letra(char letra, char vetor_letras[26])
{
    for(int i = 0; i < strlen(vetor_letras); i++)
    {
        if(letra == vetor_letras[i])
        {
            return true;
        }
    }

    return false;    
}

void substituir(char letra)
{
    for(int i = 0; i < strlen(palavra_sorteada); i++)
    {
        if(palavra_sorteada[i] == letra)
        {
            palavra_digitada[i] = letra;
        }
    }
}

void imprimir_digitadas(char letras[], int tam)
{   
    cout << "\n\nLetras digitadas: ";
    for(int i = 0; i < tam; i++)
    {
        cout << letras[i] << ", "; 
    }
}

bool palavra_completa()
{
    for(int i = 0; i < strlen(palavra_sorteada); i++)
    {
        if(palavra_digitada[i] != palavra_sorteada[i])
        {
            return false;
        }
    }

    return true;
    
}

