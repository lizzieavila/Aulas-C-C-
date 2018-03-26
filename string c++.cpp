#include <iostream>
#include <locale.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
  setlocale(LC_ALL,"Portuguese");

  string palavra;

  cout <<"Digite uma palavra \n";

  cin >>palavra;

  cout <<"A palavra é:"<<palavra <<endl;


  system("pause");
  return 0;

}

