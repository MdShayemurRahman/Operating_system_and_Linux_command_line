#include <iostream>
#include "Message.h"
using namespace std;

int main(int argc, char** argv) {
  Message a;
  a.printMsg(argc, argv);
  return 0;
}