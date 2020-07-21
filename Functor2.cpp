#include <iostream>

using namespace std;

template <class T>
class suma{
 T x;
 public:

suma(T a):x(a){};

T operator()(int b){
  return x+b;
}
};

template <class T>
class mult{
 T x;
 public:

mult(T a):x(a){};

T operator()(int b){
  return x*b;
}
};

void func1(suma<int> a){
  for(int i=0; i<10;i++){
    cout<<a(i)<<endl;
  }
}

template< class T>
void func2(suma<T> a){
  for(T i=0; i<10;i++){
    cout<<a(i)<<endl;
  }
}

template< class T>
void func3(T a){
  for( int i=0; i<10;i++){
    cout<<a(i)<<endl;
  }
}

int main() {
  suma<int> objSuma(1);
  suma<float> obj1(10.1);
  cout<<objSuma(6)<<endl;  // llamada inline
  cout<<objSuma.operator()(6)<<endl;  // llamada normal
  cout<<"----------------"<<endl;
  func1(objSuma);
  cout<<"----------------"<<endl;
  func1(suma<int>(10));
  cout<<"----------------"<<endl;
  func2(obj1);
  cout<<"----------------"<<endl;
  func2<int>(suma(5));
  cout<<"----------------"<<endl;
  func2<double>(suma(20.1));
  cout<<"----------------"<<endl;
  
  suma<int> obj2(3);
  mult<int> obj3(3);
  func3<suma<int> >(obj2);
  cout<<"----------------"<<endl;
  func3<mult<int> >(obj3);

  cout<<"----------------"<<endl;
  func3<suma<int>>(suma(20));
  cout<<"----------------"<<endl;
  func3<mult<int>>(mult(11));
}
