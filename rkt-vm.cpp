#include "src/vm/RktVM.h"

/**
 * Rkt VM main executable
 */
int main(int argc, char const *argv[]) {
  RktVM vm;

  vm.exec(R"(
    42
  )");

  return 0;
}
