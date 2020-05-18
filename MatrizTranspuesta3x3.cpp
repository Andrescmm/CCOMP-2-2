#include <iostream>

using namespace std;

void swap(int *a, int *b){
   int copia=*a;
   *a=*b;
   *b=copia;
}


void Imprimir(int A[][3]){
    for(int i=0;i<3;i++){
        for(int *i=*A;i<(*A)+3;i++){
            cout<<*i<<"  ";
    }
    cout<<endl;
    A++;
   }
}

void transpuesta(int a[][3]){
    int b[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int *inicio=*a;
    int *inicio2=*b;
    int direcciones [3]={0,3,6};
    
    int cont=0;
    for(int i =0;i<3;i++){
     int *ac=(inicio+i);
    for(int i=0;i<3;i++){
     int *trans1= (ac+*(direcciones+i));
        swap(trans1,(inicio2+cont));
          cont++;
    }
    }
  Imprimir(b);
}





int main(){

int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
transpuesta(a);

}
