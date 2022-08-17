#include <iostream>
#include <string>

using namespace std;

enum cow_purpose { dairy, meat, hide, pet };
class cow {
public:
  cow(string name, int age, unsigned char purpose) {
    name = name;
    age = age;
    purpose = purpose;
  }
  string get_name() { return name; }
  int get_age() { return age; }
  unsigned char get_purpose() { return purpose; }

private:
  string name;
  int age;
  unsigned char purpose;
};
int main() {
  cow my_cow("Michel", 5, pet);
  cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose()
       << " cow." << endl;
  cout << my_cow.get_name() << " is " << (int)my_cow.get_age() << " years old."
       << endl;

  return (0);
}
