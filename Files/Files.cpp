// Files.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string menu = "Elige lo que quieres hacer:\n\t1. Escribir en un archivo\n\t2. Leer el archivo\n\t3. Borrar todo el contenido de un archivo\n\t4. Exit\n";
    int opc = 0;
    fstream mifichero;
    string text;
    string leido;
    bool exit = false;

    do {
        cout << menu << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            mifichero.open("../fichero.txt", ios::app);
            cout << "Que quieres escribir?" << endl;
            cin.ignore();
            getline(cin, text);
            mifichero.seekg(0, ios::end);
            mifichero << text << endl;
            mifichero.close();
            break;
        case 2:
            mifichero.open("../fichero.txt", ios::in);
            leido.assign((istreambuf_iterator<char>(mifichero)), istreambuf_iterator<char>());
            mifichero.close();
            cout << "He leido el fichero:" << endl;
            cout << leido << endl;
            break;

        case 3:
            mifichero.open("../fichero.txt", ios::trunc | ios::out);
            mifichero << "" << endl;
            mifichero.close();
            cout << "Contenido del archivo borrado exitosamente" << endl;
            break;
        case 4:
            exit = true;
            break;
        default:
            cout << "Opción invalida. Intente de nuevo" << endl;
            break;
        }
    } while (exit == false);
} 



    /*string leido, leido2;
    ifstream mifichero; //lectura
    mifichero.open("../fichero.txt", ios::in);  //Modo Lectura
    mifichero >> leido;
    mifichero >> leido2;
    mifichero.close();
    cout << "He leido el fichero" << endl;
    cout << leido<< endl;
    cout << leido2;*/



    /*fstream mifichero;  //Todo
    string leido, leido2;
    mifichero.open("../fichero.txt", ios::in | ios::out);   //Modo Lectura y escritura
    
    mifichero.seekg(0);     //Puntero al principio del archivo
    mifichero >> leido;

    mifichero.seekg(0, ios::end);      //Puntero al final del archivo
    mifichero << "Roger" << endl;

    mifichero.seekg(0);     //Puntero al principio del archivo
    leido2.assign((istreambuf_iterator<char>(mifichero)), istreambuf_iterator<char>());
    mifichero.close();
    cout << "He leido el fichero:" << endl;
    cout << leido2 << endl;*/






// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
