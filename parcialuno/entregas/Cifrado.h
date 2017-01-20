 #pragma once
 #include <string>
 #include <iostream>
 using namespace std;
 
 class Cifrado
 {
 public:
 Cifrado();
 
 private:
 
 public:
 virtual string decrypt() = 0;
 
 };
 
 Cifrado::Cifrado() { }


/*

template<class T>
class Cifrado
{
  void decrypt()
  {
    if
  }
};


*/