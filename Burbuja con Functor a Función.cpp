#include <iostream>
using namespace std;


template<class T>
class asc{
    T x;
    public:
    asc(T A):x(A){};
    
    bool operator()(T a, T b){
        return a>b;
    }
};


template<class T>
class desc{
    T y;
    public:
     desc(T B):y(B){};
    
    bool operator()(T a, T b){
           return a<b;
       }
};


template <class T>
void burbuja(int *arr, int tam, T f){
    
   int aux;

    for(int *i=arr+(tam-1);i>arr;i--){
        for(int *j=arr;j<i;j++){
               if(f(*j,*(j+1))){
               aux = *j;
               *j = *(j+1);
               *(j+1)= aux;
            }
        }
    }
 }


void Imprimir(int *a,int tam){
    for(int *i=a;i<a+tam;i++)
           cout<<*i<<endl;
}


int main() {
    int a[15]={3,5,8,9,1,6,2,4,0,7,10,95,45,23,-1};

    asc<int>asc(*a);
    desc<int>desc(*a);
    
    //Orden Ascendete
    burbuja(a,15,asc);
    cout<<"Orden ascendente"<<endl;
    Imprimir(a,15);

    cout<<"-------------------"<<endl;
    
    //Orden Descendente
    burbuja(a,15,desc);
    cout<<"Orden descendente"<<endl;
    Imprimir(a,15);
}
