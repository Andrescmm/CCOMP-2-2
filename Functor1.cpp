#include <iostream>

using namespace std;

class my_functor{
   
   int x;
   public:
   my_functor(int A):x(A){};
   
   int operator()(int y){
     return (x+y);
   }
  


};


class my_functor1{
   
   int x;
   public:
   my_functor1(int A):x(A){};
   
   int operator()(int y){
     return x*y;
   }
};



int bar1(int x, my_functor f){
  return f(x);
}


template < class T>
int bar2(int x , T f){
  return f(x);
}




int main(){
my_functor a(5);
my_functor1 b(5);

cout<<a(10)<<endl;
cout<<b(10)<<endl;

cout<<bar1(20,a)<<endl;
cout<<bar1(20,my_functor(10))<<endl;

cout<<bar2(20,a)<<endl;
cout<<bar2(20,b)<<endl;

cout<<bar2(20,my_functor(10))<<endl;
cout<<bar2(20,my_functor1(20))<<endl;

}
