#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool jestPal(string testStr){
  if (testStr.length()<2)
    return true;
  if (testStr[0] != testStr[testStr.length()-1])
    return false;
  else {
    testStr.erase(0,1);
    testStr.erase(testStr.length()-1,1);
    return jestPal(testStr);
  }
}

int main() {
  string slowo;
  cout << "\nProgram sprawdza, czy podane slowo jest palindromem." << endl;
  cout << "PODAJ SLOWO:  ";
  cin >> slowo;
  if(jestPal(slowo))
    cout << "\nSłowo \"" << slowo << "\" jest palindromem." << endl;
  else
    cout << "\nSłowo \"" << slowo << "\" nie jest palindromem." << endl;
  return 0;
}
