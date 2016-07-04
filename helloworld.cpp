// George Juarez

/*
  Chapter 0: Getting Started
  - C++ has many fundamental facilities, such as IO, that are part of the standard library, rather
  than part of the core language
  - Programs that ask for standard-library facilities by using #include directives
  - Output operator is << to write a string on the standard output, and then to write the value of std::endl
  - Preceding a name by std:: indicated that the name is part of a namespace named std...std::cout
  is the standard output stream
   - Writing the value of std::endl ends the current line of output, so that if this program were to produce
  any more output, that output would appear on a new line
  - An expression asks the implementation to compute something...computation yields a result, and has side-effects
  - << is left-associative, when << appears twice or more in the same expression, each << will use as much of the
  expression as it can for its left operands, and as little of it as it can for its right operands
  - Key property of manipulators is that writing a manipulator on a stream manipulates the stream, by doing something
  other than just writing characters to it
  - std::cout is a qualified name, which uses the :: operator, operator is known as the scope operator...to the left of
  the :: is the name of the scope that is defined in the scope named on the left...this, std::cout means "the name cout
  that is in the (namespace) scope std"
  - Curly braces make the body of main and every function a scope in itself
  - Quick review of special strings: \n (newline), \t (tab), \b (backspace), \" (treats this symbol as part of the
  string terminator), \' (same meaning as ' in string literals, for consistency with character literals), \\ (includes
  a \ in the string, treating the next character as an ordinary character
  - C++ programs are usually in free form, spaces are required only when they keep adjacent symbols from running together
  - types define data structures and operations on these data structures, C++ has two kinds: built-in (ex: int) and those
  defined outside the core langauge (ex: std::ostream)
  - Namespaces are a mechanism for grouping related names, names from the standard library are defined in the namespace as std


  Chapter 1: Working with Strings
  - When we ask library to read in a string, it begins by discarding whitespace from the input, then reads characters into
  name until it encounters another whitespace character or EOF...result of executing cin >> name is to read a word from the
  standard input, storing in name the character that constitute the word
  - IO library saves its output in an internal data structure called a buffer (in general), which it uses to optimize output
  operations...library uses the buffer to accumulate the characters to be written, and fluses the buffer, by writing its
  contents to the output device, only when necessary...so that it can combine several output output operations into a single write
  --------------------------------------------------
  - The standard output also defines two other ostream objects, named cerr and clog (standard error, general info about the
  execution of the program)
  -
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Please enter your first name: ";

  // this reads the name
  string name;
  cin >> name;
  cout << "Hello, " << name << ", welcome to my program!" << endl;

  // quick review of while and for loops
  int val = 50, sum = 0;
  while(val <= 100){
    sum += val;
    ++val;
  }
  cout << "Sum of 50 to 100 inclusive is " << sum << "." << endl;

  sum = 0;
  for(int i = 1; i <= 10; ++i){
    sum += i;
  }
  cout << "Sum of 1 to 10 inclusive is " << sum << "." << endl;

  /*
    // For reading an unknown number of inputs, you can say:
    while (cin >> myValue){
      sum += value;
    }
    cout << "Sum is: " << sum << endl;
  */


  return 0;
}
