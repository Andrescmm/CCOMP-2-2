#include <iostream>
using namespace std;


float triangulo(float *arr){
    cout<<"Area del Triangulo"<<endl;
    return (*arr * *(arr+1))/2;
}


float circulo (float *arr){
    cout<<"Area del Ciculo"<<endl;
    return (3.14*(*arr)*(*arr));
}


float cuadrado (float *arr){
    cout<<"Area del Cuadrado"<<endl;
    return (*arr * *(arr+1));
}


typedef float(*p)(float *);

void calcula(float *arr,p func){
    cout<<func(arr)<<endl;
}


int main() {
    
    float arr[2]={4,2};
    calcula(arr, triangulo);
    calcula(arr, circulo);
    calcula(arr, cuadrado);
}
