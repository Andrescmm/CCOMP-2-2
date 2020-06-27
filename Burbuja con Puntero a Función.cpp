#include <iostream>
using namespace std;

bool asc(int a,int b){
    return a>b;
}

bool desc(int a,int b){
    return a<b;
}

void burbuja(int *arr, int tam, bool(*comp)(int,int)){
    
   int aux;

    for(int *i=arr+(tam-1);i>arr;i--){
        for(int *j=arr;j<i;j++){
               if(comp(*j,*(j+1))){
               aux = *j;
               *j = *(j+1);
               *(j+1)= aux;
            }
        }
    }
 }



int main() {
    int a[15]={3,5,8,9,1,6,2,4,0,7,10,95,45,23,-1};

    
    
    //Orden Ascendete
    burbuja(a,15,asc);
    cout<<"Orden ascendente"<<endl;
    for(int *i=a;i<a+15;i++)
        cout<<*i<<endl;

    
    
    //Orden Descendente
    burbuja(a,15,desc);
    cout<<"Orden descendente"<<endl;
    for(int *i=a;i<a+15;i++)
    cout<<*i<<endl;
    
}
