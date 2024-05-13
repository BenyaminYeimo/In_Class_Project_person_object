#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"

int main() {
   Person person1 = "jidon";
   Person person2 ("Mbape");
   Person person3 = person1;
   cout << person1.GetName() << endl;
   cout << person2.GetName() << endl;

   cout << person3.GetName() << endl;

}
