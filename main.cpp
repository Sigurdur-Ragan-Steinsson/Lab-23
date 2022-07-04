#include <iostream>

using namespace std;

bool isleap(){
  int year;cout << "Enter a year: ";
  cin >> year;
  
  if (year % 4 != 0){
    cout << "common year" << endl;
    return false;
  }
  else {
    if (year % 100 != 0){
      cout << "leap year" << endl;
      return true;
    }
    else {
      if (year % 400 != 0){
        cout << "common year" << endl;
        return false;
      }
      else{
        cout << "leap year" << endl;
        return true;
      }
    }
  }
  return false;
}

int main() {
  isleap();
} 