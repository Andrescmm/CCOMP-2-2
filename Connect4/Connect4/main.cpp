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
                char *cambio=(c+*(address+i));
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
                char *cambio=(c+*(address+i));
                swap(cambio,ficha);
            }
            else{
               //Do nothing
        }
    }
}
    
int MatrizLlena(char A[][7]){
    for(int i=1; i<=6;i++){
      for(char *i = *A;i<(*A)+7;i++){
          if(*i=='X'){
              return 1;
          }
      }
      A++;
    }
    return 0;
}
    
int Comprobacion(char A[][7],char pieza){
    
    //Recorrido filas
    for(char  i=0;i<6;i++){
           for(char *i=*A;i<(*A)+7;i++){
               if(*i==pieza){
                   char *rf=i;
                   //Derecha
                   if((*rf==pieza)and(*(rf+1)==pieza)and(*(rf+2)==pieza)and*(rf+3)==pieza){
                       return 1;
                   }
                   //Izquierda
                   if((*rf==pieza)and(*(rf-1)==pieza)and(*(rf-2)==pieza)and*(rf-3)==pieza){
                       return 1;
                   }
                   //Arriba
                   if((*rf==pieza)and(*(rf+7)==pieza)and(*(rf+14)==pieza)and*(rf+21)==pieza){
                       return 1;
                   }
                   //Diagonal Abajo Derecha
                   if((*rf==pieza)and(*(rf+8)==pieza)and(*(rf+16)==pieza)and*(rf+24)==pieza){
                       return 1;
                   }
                   //Diagonal Abajo Izquierda
                   if((*rf==pieza)and(*(rf+6)==pieza)and(*(rf+12)==pieza)and*(rf+18)==pieza){
                       return 1;
                   }
                   //Diagonal Arriba Izquierda
                   if((*rf==pieza)and(*(rf-8)==pieza)and(*(rf-16)==pieza)and*(rf-24)==pieza){
                       return 1;
                   }
                   //Diagonal Arriba Derecha
                   if((*rf==pieza)and(*(rf-6)==pieza)and(*(rf-12)==pieza)and*(rf-18)==pieza){
                       return 1;
                   }
               }
         }
       A++;
     }
    
    
    
    
    
    return 0;
}
    
    



void Imprimir(char A[][7]){
    for(char  i=0;i<6;i++){
        for(char *i=*A;i<(*A)+7;i++){
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
    
    
    cout<<"CHOOSE A COLUMN FORM 1-7"<<endl;
    cout<<"PLAYER 1 PLAYS WHIT '0'"<<endl;
    cout<<"PLAYER 2 PLAYS WHIT '1'"<<endl;
    Imprimir(A);
    
    bool juego=true;
           while(juego){
               
    
                   int colummna1;
                   cout<<"CHOOSE A COLUMN"<<endl;
                   cout<<"PLAYER 1 = ";
                   cin>>colummna1;
                   Player1(A, colummna1-1);
                   cout << string(20, '\n');
                   Imprimir(A);
                   
                 int win1=Comprobacion(A,'0');
                   if(win1==0){
                        //Keep running
                      }
                   else{
                       cout << string(20, '\n');
                       Imprimir(A);
                       cout<<"PLAYER 1 WINS!!"<<endl;
                       cout<<"GAME OVER"<<endl;
                       break;
                   }
               
            
             
                   
                   int (colummna2);
                   cout<<"CHOOSE A COLUMN"<<endl;
                   cout<<"PLAYER 2 = ";
                   cin>>colummna2;
                   Player2(A, colummna2-1);
                   cout << string(20, '\n');
                   Imprimir(A);
               
                   
                  int win2=Comprobacion(A,'1');
                    if(win2==0){
                       //Keep running
                    }
                    else{
                        cout << string(20, '\n');
                        Imprimir(A);
                        cout<<"PLAYER 2 WINS!!"<<endl;
                        cout<<"GAME OVER"<<endl;
                        break;
                    }
               }
}
