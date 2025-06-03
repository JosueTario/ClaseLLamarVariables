#include <iostream>

float suma(float uno, float dos){
    float resultado =0;
    resultado=uno+dos;
    return resultado;
}

float resta(float Num1, float Num2){ 
float resultado=0;
resultado=Num1-Num2;
return resultado;
}

float multiplicacion(float Numero1, float Numero2){ 
float resultado=0;
resultado=Numero1*Numero2;
return resultado;
}

float division(float Nu1, float Nu2){ 
float resultado=0;
resultado=Nu1/Nu2;

if (Nu2!=0)
{
    return resultado;

}else if (resultado=5000)
{
    return resultado;
}


}

using namespace std;

int main(){

    float n1,n2, sumatoria=0, n3=7, n4=56, sumatoria2=0, resultadoResta=0,ResultMultiplicacion,ResultDivision;
    char opcion, decision;

    cout<<"Operaciones"<<endl;
    cout<<endl<<"Ingrese un numero: "<<endl;
    cin>>n1;

  if (n1==0)
{
   cout<<"No puedes elegir el 0";
   return 0;
}

    cout<<endl<<"Ingrese otro numero: "<<endl;
    cin>>n2;

   

    sumatoria=suma(n1,n2);
    sumatoria2=suma(n3,n4);
    resultadoResta=resta(n1,n2);
    ResultMultiplicacion=multiplicacion(n1,n2);
    ResultDivision=division(n1,n2);

    do
    {
    

    cout<<endl<<"Cual de las operaciones desea visualizar? "<<endl;
    cout<<endl<<"1.Primera sumatoria\n2.Segunda sumatoria\n3.Resultado de la resta\n4.Resultado multiplicacion\n5.Resultado division"<<endl;
    cin>>opcion;

    switch (opcion)
    {

    case '1':
       cout<<endl<<"Su resultado de la primera suma es: "<<sumatoria<<endl;
        break;


    case '2':
         cout<<endl<<"Su resultado de la segunda sumatoria es: "<<sumatoria2<<endl;
         break;
    
    case '3':
        cout<<endl<<"El resultado de su resta es: "<<resultadoResta<<endl;
        break;
    
    case '4':
         cout<<endl<<"EL resultado de su multiplicacion es: "<<ResultMultiplicacion<<endl;
         break;

    case '5':

        //EXCLUSIVO PARA LA DIVISION
    if (n2!=0)
    {
        cout<<endl<<"El resultado de su division es: "<<ResultDivision;

    }else if (n2==0){
        cout<<endl<<"El resultado de su division es: invalido, no se puede dividir entre 0"<<endl;
    }else if (ResultDivision=5000){
        cout<<endl<<"El resultado de su division es: invalido, el primer numero no puede ser menor que el segundo";
    }
        break;

    default:
        cout<<"Elija una opcion valida";
        break;
    }

    cout<<endl<<"Desea visualizar otra operacion? ";
    cout<<endl<<"Si/s No/n";
    cin>>decision;

     } while (decision=='s');
    

    return 0;
}