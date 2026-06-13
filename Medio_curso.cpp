#include<iostream>
using namespace std;

int HT,salario,descuento; 

int horasTrabajadas(void)
{ 
    do{
    cout<<"Cuantas horas has trabajado esta semana ? "<<endl;
    cin>>HT;
    }while(HT<0 || HT>40);

    return HT;
}

int Salario(void)
{
    salario=HT*3;
    return salario;
}

int Descuento(void)
{
    int Afp=120,Seg=150;
    descuento=salario-Afp-Seg;
}

int Beneficio(void)
{
    int alimento,viaje;
    string op;

    cout<<"Cuenta con algun beneficio"<<endl;
    cin>>op


}
    

int main(){

    horasTrabajadas();

    return 0;
}