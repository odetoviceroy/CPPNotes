// George Juarez

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#define ll long long

using namespace std;

// Prompt user for a number, if 42, tell user they have found the answer to the UNIVERSE
void lifeUniverseEverything(){
  int userInput;
  cout << "Please enter a number to see if you know the answer to Life: " << endl;
  cin >> userInput;
  while(userInput != 42){
    cout << "Please enter another number: " << endl;
    cin >> userInput;
  }
  if(userInput == 42){
    cout << "YOU HAVE FOUND THE ANSWER TO LIFE, THE UNIVERSE, AND EVERYTHING \nGOODBYE NOW" << endl;
  }
}

// below is an implmentation of the Sieve of Atkins
// it is, however, not my code
// credits go to http://www.sanfoundry.com/cpp-program-implement-sieve-atkins/

void sieveOfAtkin(ll int lowerNum, ll int num){
  vector<bool> is_prime(num + 1);
  is_prime[2] = true;
  is_prime[3] = true;
  for(ll int i = 5; i <= num ; i++){
    is_prime[i] = false;
  }
  ll int lim = ceil(sqrt(num));
  for (ll int j = 1; j <= lim; j++){
    for (ll int k = 1; k <= lim ; k++){
      ll int summ = (4 * j * j + k * k);
      if(summ <= num && (summ % 12 == 1 || summ % 12 == 5)){
        is_prime[summ] = true;
      }
      summ = (3 * j * j + k * k);
      if(summ <= num && (summ % 12 == 7)){
        is_prime[summ] = true;
      }

      if(j > k){
        summ = (3 * j * j - k * k);
        if(summ <= num && (summ % 12 == 11)){
          is_prime[summ] = true;
        }
      }
    }
  }

  for(ll int i = 5; i <= lim ; i++){
    if(is_prime[i]){
      for(ll int j = i * i; j <= num; j+= i){
        is_prime[j] = false;
      }
    }
  }

  for(ll int i = 2; i <= num; i++){
    if(is_prime[i] && i >= lowerNum){
      cout << i << "\t" << endl;
    }
  }
}

int main(void){
  char go_again = 'y';
  int userChoice = 0;
  cout << "Hello, welcome to the main menu. Below are different exercises you can run." << endl;
  while (tolower(go_again) == 'y'){
    cout << "[1] Life, Universe, and Everything Problem \n[2] Prime Number Generator "<< endl;
    cout << "Please select an option: ";
    cin >> userChoice;
    if(userChoice == 1){
      lifeUniverseEverything();
    }
    if(userChoice == 2){
      ll int userInputLowerLimit, userInputUpperLimit = 0;
      while(userInputLowerLimit >= userInputUpperLimit){
        cout << "Enter two numbers for upper and lower limits: [Usage: LowerNumber UpperNumber] ";
        cin >> userInputLowerLimit;
        cin >> userInputUpperLimit;
        if(userInputLowerLimit >= userInputUpperLimit){
          cout << "Invalid input." << endl;
        }
      }
      cout << "Here are the prime numbers between " << userInputLowerLimit << " and " << userInputUpperLimit << ", inclusively: " << endl;
      sieveOfAtkin(userInputLowerLimit, userInputUpperLimit);
    }
    cout << "Would you like to perform another action? [y/n]: ";
    cin >> go_again;
  }
  return 0;
}
