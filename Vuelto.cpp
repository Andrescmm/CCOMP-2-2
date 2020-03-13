#include <iostream>
using namespace std;

void vuelto (float monto){
    
    float monto1=monto;
    int entero=(int)monto1;
    int decimal=(monto*10)-(entero*10);

   
    int billetes[]={200,100,50,20,10,5,2,1};
    int centimos[]={5,2,1};
    
    
for (int i=0;i<=7;i++){
    int temporal= entero/billetes[i];

    if(temporal != 0){
        
        if(temporal==1){
            if(i<=4){
                    cout<<temporal<<" billete de "<<billetes[i]<<endl;
            }
            else{
                    cout<<temporal<<" moneda de "<<billetes[i]<<endl;
            }
        }
        else{
            if(i<=4){
                    cout<<temporal<<" billetes de "<<billetes[i]<<endl;
            }
            else{
                    cout<<temporal<<" monedas de "<<billetes[i]<<endl;
            }
        }
        entero=entero%billetes[i];
     }
   }



for(int i=0;i<=2; i++){
    int temporal= decimal/centimos[i];
 
    if(temporal !=0){
        if(temporal==1){
            cout<<temporal<<" moneda de "<<"0."<<centimos[i]<<endl;
        }
        else{
            cout<<temporal<<" monedas de "<<"0."<<centimos[i]<<endl;
        }
     }
    decimal=decimal%centimos[i];
  }
 
    //fin
}
    




int main() {
    
    float numero;
    cout<<"Ingrese el monto: ";
    cin>>numero;
    vuelto(numero);
   
}
