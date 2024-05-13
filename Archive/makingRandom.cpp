#include<iostream>
#include<fstream>
#include<stdexcept>
#include<cstdlib>
#include<iomanip>

#include "RealRandom/realRandom_urandom.hpp"

int main(){
  realRandom_urandom rand;
  //creating new file
  std::ofstream out("bin/random.txt", std::ios::out);
  if (!out) {
    throw std::runtime_error("Failed to open random.txt");
  }

  //난수 생성
  for(int i=0;i<1000000;i++){
    unsigned int randomValue = rand.getRand() % 1000000;
    out << std::dec << randomValue << std::endl; // Save as decimal
  }
  out.close();

  //샘플로 10개 읽기
  std::ifstream in("bin/random.txt", std::ios::in);
  if (!in) {
    throw std::runtime_error("Failed to open random.txt");
  }

  for(int i=0;i<10;i++){
    unsigned int randomValue;
    in >> randomValue; // Read as decimal
    std::cout << randomValue << std::endl;
  }
}
