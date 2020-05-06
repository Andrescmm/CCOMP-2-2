#include <iostream>
#include <ctime>
using namespace std;

//Funcion para imprimir Arrays
void ImprimirArray(int *array,int tam){
cout<<"[";
for(int *p=array;p<(array+tam);p++){
    if(p<(array+tam)-1){cout<<*p<<",";}
    else{cout<<*p<<"]"<<endl;}}}

//Funcion para generar numeros aletorios
void GeneradorRandom(int *array, int size){
    int max=100;
    srand(time(0));
       for (int  i = 0; i < size; ++i ){
              *(array+i) = rand() % max;
          }
}

void AritmeticaPunteros(int *Input, int *Output_1, int *Output_2, int tam){
    
    for (int *p =Input;p<(Input+tam);p++){
        if(*p%2==0){
            *Output_1=*p;
            Output_1++;
        }
        if(*p%2!=0){

            *Output_2=*p;
             Output_2++;
        }
  }
}

 

int main() {
    int Input[15]={0};
    
    GeneradorRandom(Input,15);
    
    int Output_1[15]={0};
    int Output_2[15]={0};

    int tam = sizeof(Input)/sizeof(*Input);//Al ser todas del mismo size se puede hacer un tam de uno solo para todos
    cout<<"Array: "<<endl;
    ImprimirArray(Input, tam);
    
    AritmeticaPunteros(Input,Output_1,Output_2,tam);
    cout<<"Array de Pares: "<<endl;
    ImprimirArray(Output_1, tam);
    cout<<"Array de Impares: "<<endl;
    ImprimirArray(Output_2, tam);

}
