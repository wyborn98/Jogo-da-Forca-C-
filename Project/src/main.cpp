 // Solução do problema do Jogo da Forca baseada nas videoaulas da G-Tech Soluções.

#include "../include/my_functions.h"


int main()
{   
    
        //Inicializações necessárias
        contador_letras = 0;
        contador_erros  = 0;    
        int linha_palavra = sorteia();
        copia_palavra(linha_palavra);
        limpar_campos();

        while(contador_erros < 6 && palavra_completa() == false)
        {   
                        
            system("clear");
            imprimir_corpo(contador_erros);
            cout << endl;
            imprimir_palavra();
            imprimir_digitadas(letras_digitadas, contador_letras);
            cout << endl << "Tentativas restantes: " << 6 - contador_erros << endl << endl;
            cout << endl << endl;
            
            cout << "Digite uma letra: ";
            cin  >> letra;
            letra = tolower(letra);

            if (verifica_letra(letra, letras_digitadas)) 
            {
                cout << "Letra já foi digitada! Tente outra." << endl << endl;
                getchar();
            } else
            {
                letras_digitadas[contador_letras] = letra;
                contador_letras++;

                if(verifica_letra(letra, palavra_sorteada))
                {                   
                    substituir(letra);
                }
                else 
                {   
                    cout << "Letra incorreta! Tente outra." << endl;
                    contador_erros++;
                } 
            }  
        
        }

        if(contador_erros >= 6)
        {
            system("clear");
            cout << "\nSuas tentativas acabaram! Você perdeu :(" << endl << endl;
            getchar();
            
        }

        if(palavra_completa() == true)
        {   
            system("clear");     
            cout << "\n Parabens, voce venceu!!!" << endl << endl;            
            
        }        

    return 0;
    //Fim :)
}
