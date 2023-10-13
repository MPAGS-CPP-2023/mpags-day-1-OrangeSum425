#include <iostream>
#include <string>
int main()
{  
   //ex1
   std::cout<<"Hello World!\n";
   //ex3_string
   std::string mgs {"Hello"};
   std::cout<<mgs<<"\n";
   char word{'a'};
   word=mgs[0];
   std::cout<<word<<std::endl;
   //ex2
   int a{5};
   double b {6.1};
   std::cout<<b<<std::endl;  
   double c =a*b;
   std::cout << c << std::endl;
   const double test{4.5};
   std::cout<<test<<std::endl;
   int d{5};
   d=5.4;
   std::cout<<d<<std::endl;   
   
  //ex4
  double var1{10.5};
  int var2{9};
  int var3{3};
  std::cout<<"The product of two parameters = " << var1*var2 << "\n";
  std::cout<<"Double divede by int = " << var1/var2 <<"\n";
  std::cout<<"Int divede by int = " << var2/var3 <<"\n";

}
