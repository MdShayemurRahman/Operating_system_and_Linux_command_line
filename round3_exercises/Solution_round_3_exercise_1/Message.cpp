#include <iostream>
#include "Message.h"
using namespace std;

void Message::printMsg(int argc, char** argv) {
  cout << "Number of command line arguments: " << argc-1 << endl;

  for(int i = 1; i < argc; i++) {
    cout << argv[i] << endl;
  }
  
}