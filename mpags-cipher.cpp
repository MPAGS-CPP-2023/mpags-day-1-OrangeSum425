#include <iostream>
#include <string>
int main()
{  
   //ex1
   std::cout<<"Hello World!\n";
   //ex3_string
   std::string mgs {"Hello"};
   std::cout<<mgs<<"\n";
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
}
