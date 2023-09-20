#include "Aldeano.h"
#include "Command.h"
#include "Common.h"


int preferencia;
string contraseña;
string nombre;
int salud;
TipoObjetos objeto = TipoObjetos::Pan; 
TipodeAldeano tipo = TipodeAldeano::Normal; 
 
int main()
{
    Aldeano aldeano;
    Command comando;
    cout << "Ingresa el nombre de tu aldeano" << endl;
    cin >> nombre;
    cout << "Ingresa la salud del aldeano" << endl;
    cin >> salud;
    do
    {
        cout << "Seleccione que quiere hacer ahora:" << endl;
        cout << "1. Ingresar un comando para el aldeano" << endl;
        cout << "2. Realizar un intercambio" << endl;
        cout << "3. Mostrar informacion del aldeano" << endl;
        cout << "4. Salir" << endl;
        cin >> preferencia;

        switch (preferencia)
        {
        case 1:
            cout << "Por favor, escriba el comando que desea usar: " << endl;
            cout << "1. Comun   2. Cana   3. Rayo   4. Espada   5. Libro" << endl;
            cin >> contraseña;

            comando.comando(contraseña, tipo);
           
            cout << "Este es tu tipo: " << tipo << endl;
            break;

        case 2:
            cout << "Porfavor escriba solo un comando que quiera: " << endl;
            cout << "1. Pan   2. Pez   3. Verruga   4. Hierro   5. Hoja" << endl;

            cin >> contraseña;

            comando.tradeo(contraseña, tipo, objeto);
    

            cout << "Este es tu objeto: " << objeto << endl;
            break;

        case 3:
            cout << "Estado actual del aldeano:" << endl;

            cout << "Despues del comando:" << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Salud: " << salud << endl;
            cout << "Tipo: " << tipo << endl;
            cout << "Objeto: " << objeto << endl;
           
            break;

        case 4:
            cout << "Hmmmmm (hasta pronto)" << endl;
            break;

        default:
            cout << "Opcion no permitida" << endl;
            break;
        }
    } while (preferencia != 4);

    return 0;
}
