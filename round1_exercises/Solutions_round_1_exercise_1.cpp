#include <iostream>
using namespace std;

void greet(int argc, char**argv);

int main(int argc, char**argv)
{
  greet(argc, argv);
  return EXIT_SUCCESS;
}

void greet(int argc, char**argv)
{
  for(int i = 1; i < argc; i++){
    cout << argv[i] << " ";
  }
  cout << endl;
}
