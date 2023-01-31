#include <iostream>
#include "Message.h"
using namespace std;

void Message::printMsg(int argc, char** argv) {

  if(argc != 1)
    cout << "Hello, " << argv[1] << endl;
  else
    cout << "Argument Not Entered" << endl;
}