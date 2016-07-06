// George Juarez

#include <iostream>
using namespace std;

void LifeUniverseEverything(){
  int userInput;
  cout << "Hello! Please enter a number: " << endl;
  cin >> userInput;
  while(userInput != 42){
    cout << "Please enter another number: " << endl;
    cin >> userInput;
  }
  if(userInput == 42){
    cout << "YOU HAVE FOUND THE ANSWER TO LIFE, THE UNIVERSE, AND EVERYTHING \nGOODBYE NOW" << endl;
  }
}

int main(void){
  LifeUniverseEverything();
  return 0;
}
