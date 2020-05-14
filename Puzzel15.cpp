#include <iostream>
#include <stdlib.h>


using namespace std;


int Win(int A[][4], int B[][4]){
    for(int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            if(B[i][j] != A[i][j]){
                return 0;
            }
        }
    }
    return 1;
}

void swap(int *a, int *b){
    int copia=*a;
    *a=*b;
    *b=copia;
}



void MoverDerecha(int A[][4]){
    int *ptr = nullptr;
    for(int i=0;i<4;i++){
           for(int *i=*A;i<(*A)+4;i++){
               if(*i==0){
                   ptr=i;
               }}
       A++;
    }
    int *ptn=(ptr+1);
    
    swap(ptr,ptn);
     
}
void MoverIzquierda(int A[][4]){
    int *ptr = nullptr;
    for(int i=0;i<4;i++){
           for(int *i=*A;i<(*A)+4;i++){
               if(*i==0){
                   ptr=i;
               }}
       A++;
    }
    int *ptn=(ptr-1);
    
    swap(ptr,ptn);
}

void MoverArriba(int A[][4]){
    int *ptr = nullptr;
     for(int i=0;i<4;i++){
            for(int *i=*A;i<(*A)+4;i++){
                if(*i==0){
                    ptr=i;
                }}
        A++;
     }
    
  int *ptn=(ptr-4);

  swap(ptr,ptn);
   
}

void MoverAbajo(int A[][4]){
        int *ptr = nullptr;
         for(int i=0;i<4;i++){
                for(int *i=*A;i<(*A)+4;i++){
                    if(*i==0){
                        ptr=i;
                    }}
            A++;
         }
        
      int *ptn=(ptr+4);

      swap(ptr,ptn);

}







void Imprimir(int A[][4]){
    for(int i=0;i<4;i++){
        for(int *i=*A;i<(*A)+4;i++){
            cout<<*i<<" ";
    }
    cout<<endl;
    A++;
   }
}


int main(){
    int A[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,0,14,15}};
    cout<<"W=UP  A=LEFT  D=RIGTH   S=DOWN  Z=EXIT"<<endl;
    cout<<"AFTER PRESS A KEY PRESS ENTER"<<endl;
    Imprimir(A);
    
     bool juego=true;
        while(juego){
            //Imprimir(A,4);

            char letra;
            cin>>letra;
        
            switch(letra) {
                case 'w':
                    cout << string(20, '\n');
                    MoverArriba(A);
                    break;
                case 's':
                    cout << string(20, '\n');
                    MoverAbajo(A);
                   
                    break;
                case 'd':
                    cout << string(20, '\n');
                    MoverDerecha(A);
                    break;

                case 'a':
                    cout << string(20, '\n');
                    MoverIzquierda(A);
                    break;
                    
                case 'z' :
                    juego=false;
                    break;

            }
            
            int B[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
            int res=Win(A,B);
            if(res==0){
            cout<<res<<endl;
                cout << string(20, '\n');
                Imprimir(A);}
            else{
                cout<<"YOU WIN!!"<<endl;
                cout<<"GAME OVER"<<endl;
                break;
                 }
        }
            
}
