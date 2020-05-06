#include <iostream>

using namespace std;



//Funcion para imprimir Arrays
void ImprimirArray(int *array,int tam){
cout<<"[";
for(int *p=array;p<(array+tam);p++){
    if(p<(array+tam)-1){cout<<*p<<",";}
    else{cout<<"]"<<endl;}}}




void Ordenamiento(int *Input1 ,int *Input2 ,int *Output ,int tam ){

    for(int *i=Input1;i<Input1+tam;i++){
        
        if(*Input1 < *Input2){
            *Output=*Input1;
            Input1++;
            Output++;
        }
        else{
            *Output=*Input2;
            Input2++;
            Output++;
        }
        
    }
}



int main() {
     
    int Input1[8]={2,4,6,8,10,12,14,16};
    int Input2[8]={1,3,5,7,9,11,13,15};
    int tam= sizeof(Input1)/sizeof(*Input1);
    
    
    int Output[16]={};
    
    Ordenamiento(Input1, Input2, Output, tam);
    ImprimirArray(Output, 16);

    return 0;
}
