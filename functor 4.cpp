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
class suma1{

 T x;
 public:
 suma1(T X):x(X){};

 int operator()(T y){
   return x+y;
 }
};



template<class T,int a>
class opera{
 T op=T(a);
 public:
 
 int run(int y){
   return op(y);
 }

};


template<class T,class U,U a>
class opera1{
 T op=T(a);
 public:
 
 U run(U y){
   return op(y);
 }

};


int main(){

opera<suma,5>op1;
suma1<double>s1(3.5);
opera1<suma1<int>,int,3>op2;


cout<<op1.run(10)<<endl;
cout<<s1(2.3)<<endl;
cout<<op2.run(8)<<endl;

}
