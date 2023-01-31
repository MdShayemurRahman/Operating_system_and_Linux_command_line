#include <unistd.h>
#include <iostream>

int main(int argc, char *argv[]) {
  const char *new_argv[] = { "/bin/ls", NULL };
  const char *new_envp[] = { NULL };

  if (execve(new_argv[0], const_cast<char *const *>(new_argv), const_cast<char *const *>(new_envp)) == -1) {
    std::cerr << "execve failed\n";
    return 1;
  }

  return 0;
}