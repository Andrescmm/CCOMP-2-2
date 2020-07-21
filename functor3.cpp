#include <iostream>
using namespace std;

class suma{

 int x;
 public:
 suma(int X):x(X){};
  
 int operator()(int y){
   return x+y;
 }
};

template<class T>
class suma2{

 T x;
 public:
 suma2(T X):x(X){};
  
 int operator()(T y){
   return x+y;
 }
};


template <class T>
class opera{
// delgado a tiempo de ejecución 
 public:
 int run(int y, T op){
   return op(y);
 }
};

template <class T, int a=5>
class opera1{
 T op=T(a);
 public:
 int run(int y){
   return op(y);
 }
};
  

template <class T, class U, int a>
class opera2{

 T op=T(a);
 public:
 int run(int y){
   return op(y);
 }

};


int main(){

opera<suma> op1;
//en este momento se crea el functor
cout<<op1.run(10,suma(5))<<endl;

opera1<suma,20>op2;
cout<<op2.run(10)<<endl;

suma op3(5);
suma op4=suma(5);

cout<<op3(3)<<endl;
cout<<op4(10)<<endl;

suma2<int>op5(3);

}
