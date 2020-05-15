#include <iostream>

using namespace std;


void swap(char *a, char *b){
    char copia=*a;
    *a=*b;
    *b=copia;
}

void Player1(char A[][7],int colum){
    char *inicio=*A;
    char ficha1='0';
    char *ficha = &ficha1;
    //Ubicar la columna deseada
    char*c =(inicio+colum);
    //Ingresar la ficha
    int address[6]={35,28,21,14,7,0};
    
        for(int i=0;i<6;i++){
            if(*(c+*(address+i))=='X'){
                char *cambio=(c+address[i]);
                swap(cambio,ficha);
            }
            else{
               //Do nothing
        }
    }
}

void Player2(char A[][7],int colum){
    char *inicio=*A;
    char ficha1='1';
    char *ficha = &ficha1;
    //Ubicar la columna deseada
    char*c =(inicio+colum);
    //Ingresar la ficha
    int address[6]={35,28,21,14,7,0};
    
        for(int i=0;i<6;i++){
            if(*(c+*(address+i))=='X'){
                char *cambio=(c+address[i]);
                swap(cambio,ficha);
            }
            else{
               //Do nothing
        }
    }
}
    
    
    
    
    
    
    









void Imprimir(char A[][7]){
    for(char  i=0;i<7;i++){
        for(char *i=*A;i<=(*A)+6;i++){
            cout<<*i<<"  ";
    }
    cout<<endl;
    A++;
   }
}





int main (){
   char A[6][7]={{'X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X'}};
    
    Imprimir(A);
    
    bool juego=true;
           while(juego){
               //Turno Player 1
               int colummna1;
               cout<<"Ingrese una Colummna"<<endl;
               cout<<"Player 1 = ";
               cin>>colummna1;
               Player1(A, colummna1-1);
               Imprimir(A);
               
               //Turno Player 2
               int (colummna2);
               cout<<"Ingrese una Colummna"<<endl;
               cout<<"Player 2 = ";
               cin>>colummna2;
               Player2(A, colummna2-1);
               Imprimir(A);
    
           }
    
}
