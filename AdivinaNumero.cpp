#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int random, vida=3, numeroUsuario, randomMsg;
    
    srand(time(NULL));
    random = 1 + rand()%10;
    
    
    cout << "****Bienvenido****" << endl;
    cout << "ADIVINE EL NUMERO" << endl;
    cout << "******************" << endl;
    cout << endl;
    cout << "Pruebe su suerte: ";
    cin>> numeroUsuario;
    
    
    cout << endl;
    
    while (random!=numeroUsuario && vida !=0)
    {
        for (int i=0;i<vida;i++)
        {
            cout << "♡";
        }
        cout << endl;
       srand(time(NULL));
       randomMsg = 1 + rand()%3;
       
        switch (randomMsg) 
    {
        case 1:
        cout << "Vamos otro intento" << endl;
        break;
        
        case 2:
        cout << "SI se puede" << endl;
        break;
        
        case 3:
        cout << "No te des por vencido" << endl;
        break;
    }
        cout << "Pruebe su suerte: ";
        cin>> numeroUsuario;
        cout << endl;
        vida--;
    }
    
    if (random==numeroUsuario)
    {
        cout << "GANASTE COMO UN GENIO!!" << endl<<endl;
    }else
    {
        cout << "PERDISTE PERO IGUAL TE AMAMOS" << endl<<endl;
    }
    cout << "Gracias por jugar" << endl;
    
    return 0;
}