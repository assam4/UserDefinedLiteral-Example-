#include <iostream>

constexpr unsigned long long arithmetic(unsigned long long n)     // calculation
{                  
      if(n<0) throw "Wrong parametr" ;
      return (n <= 1) ? 1 : n * arithmetic(n - 1);         
}

constexpr unsigned long long operator""_factorial(unsigned long long n)   // User defined Literal 
 {         
       return arithmetic(n) ;   
 }

int main() 
{
try
      {
          constexpr unsigned long long result = 5_factorial;                 // equal to 120 
          std::cout << "Factorial :" << result << std::endl;
          return 0;
      }
catch(const char* error) 
      {
            std::cerr << error << std::endl ; exit(1) ;
      }
      
}
