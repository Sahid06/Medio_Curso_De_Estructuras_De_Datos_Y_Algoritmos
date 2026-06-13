#include <iostream>
using namespace std;

//variables globales.
float salario = 0, descuento = 0, beneficio = 0;
int horas = 0;

//le pedimos al usuario que ingrese sus horas trabajadas, claro dentro de un rango de 0 a 40 horas.
void ingresarHoras() {
    do{
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    }while(horas<0||horas>40);


    salario = horas * 120;
    cout << "Horas guardadas correctamente.\n";
}

//Muestra el salario.
void mostrarSalario() {
    cout << "El salario es: S/ " << salario << endl;
}

//Preguntamos que tipo de descuento tiene.
void ingresarDescuento() {
    cout << "Ingrese descuento (AFP=s/.150) (Seg=s/.120): ";
    cin >> descuento;
}

//La funcion que permite poner el beneficio que tenemos, utilizamos un bloque de control.
void ingresarBeneficio() {
    int op;
    
    cout << "Tipo de beneficio:\n";
    cout << "1. Beneficio de alimento S/ 500\n";
    cout << "2. Beneficio de viaje S/ 1000\n";
    cout << "Elija una opcion(1 o 2): ";
    cin >> op;

    if (op == 1) {
        beneficio = 500;
    } else if (op == 2) {
        beneficio = 1000;
    } else {
        cout << "Opcion no valida.\n";
    }
}

//Mostramos la boleta con todos los datos guardados anteriormente si es que los pusimos.
void imprimirBoleta() {
    float total;

    total = salario - descuento + beneficio;

    cout << "\n----- BOLETA -----\n";
    cout << "Horas trabajadas: " << horas << endl;
    cout << "Salario: S/ " << salario << endl;
    cout << "Descuento: S/ " << descuento << endl;
    cout << "Beneficio: S/ " << beneficio << endl;
    cout << "Total a pagar: S/ " << total << endl;
}

int main() {

    //Utilizamos un do-while, dentro del bucle usamos un switch para poder utilizar diversas opciones.
    int opcion; 

    do {
        cout << "\nMENU\n";
        cout << "1. Ingresar horas trabajadas\n";
        cout << "2. Mostrar salario\n";
        cout << "3. Ingresar descuento\n";
        cout << "4. Ingresar beneficios\n";
        cout << "5. Imprimir boleta\n";
        cout << "6. Salir\n";
        cout << "Elija opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarHoras();
                break;
            case 2:
                mostrarSalario();
                break;
            case 3:
                ingresarDescuento();
                break;
            case 4:
                ingresarBeneficio();
                break;
            case 5:
                imprimirBoleta();
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion incorrecta\n";
        }

    } while (opcion != 6);

    return 0;
}