#include <iostream>

using namespace std;

class Foo
{
  public:
    int a;
    static int b; //Static, es compartido por todos los objetos

    int add(int i, int j)
    { return i+j;}

    int mult(int i, int j)
    { return i*j; }

    //Static, metodo compartido por todos los objetos
    // no es necesario el objeto cuando es static
    // se envia como puntero a funcion normal 
    static int negate(int i)
    { return -i;}

    void incr()
    { b++;}
};


// Foo *pFoo es un objeto puntero 
// Es un puntero a un metodo = int(Foo::*pfn)(int,int)
int bar1(int i, int j, Foo *pFoo, int(Foo::*pfn)(int,int) )
{ 
  return (pFoo->*pfn)(i,j);
}

// tipo de dato PUNTERO A metodo
// Foo:: lo hace a metodo
typedef int(Foo::*Foo_pfn)(int, int);

int bar2(int i, int j, Foo *pFoo, Foo_pfn pfn)
{ 
  return (pFoo->*pfn)(i,j);
}


// ejemplo para el static
int bar3(int i,int(*pfn)(int)){
  return pfn(i);
}
// Atributo estatico comun para todos los objetos solo con la necesidad de instanciarlo 
// es algo comun entre objetos si se incrementa en un objeto en el otro tambien ser asi 

typedef int (*PFN)(int);
// Con typedef
int bar4(int i,PFN pfn){
  return pfn(i);
}

int Foo::b=0;

int main() 
{
  Foo foo, foa;

  cout<<"Foo::add(2,4) = "<<bar1(2,4,&foo,&Foo::add)<<endl;
  cout<<"Foo::mult(3,5) = "<<bar2(3,5,&foo,&Foo::mult)<<endl;
  //Llamadas a método estático
  //ini
  cout<<"Foo::negate(6) = "<<bar3(6,&Foo::negate)<<endl;
  cout<<"Foo::negate(7) = "<<bar3(7,Foo::negate)<<endl;
  cout<<"Foo::negate(8) = "<<bar4(8,&Foo::negate)<<endl;
  cout<<"Foo::negate(9) = "<<bar4(9,Foo::negate)<<endl;
  //fin 

 //llamadas a atributo estático
  foo.a=5;
  cout<<"foo.a = "<<foo.a<<endl;
  foa.a=10;
  cout<<"foa.a = "<<foa.a<<endl;

  cout<<"variable b = "<<Foo::b<<endl;
  foo.incr();
  cout<<"variable b = "<<Foo::b<<endl;
  foa.incr();
  cout<<"variable b = "<<Foo::b<<endl;
  cout<<foa.b<<endl;
  cout<<foo.b<<endl;
}
