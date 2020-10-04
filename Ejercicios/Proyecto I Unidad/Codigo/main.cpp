#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int videojuego = 0;

    while (true)

    {
         system("cls");
        
        cout << "******************" << endl;
		cout << "MENU DE JUEGOS" << endl;
		cout << "******************" << endl;
		cout << endl;
		
		cout << "Por favor, seleccione un juego: " << endl;
		cout << "1 - StartShip" << endl;
		cout << "2 - Snake" << endl;
		cout << endl;
		
		cout << "Digite el numero del juego que desea iniciar:  ";
		cin >> videojuego;

        switch(videojuego)
		{
			case 1:
				system ("cls");
		        starShip();
                break;
            case 2:
				system ("cls");
                snake();
                break;
        }

    }   
    return 0;
}
