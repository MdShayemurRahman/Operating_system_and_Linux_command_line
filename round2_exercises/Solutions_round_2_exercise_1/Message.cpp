#include <iostream>
#include "Message.h"
using namespace std;

void Message::printMsg(int argc, char** argv) {
  cout << "Hello, " << argv[1] << endl;
}