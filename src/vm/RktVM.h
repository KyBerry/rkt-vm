/**
 * 🚀 Rkt Virtual Machine
 */

#ifndef __RktVM_h
#define __RktVM_h

#include <string>
#include <vector>
#include "../bytecode/OpCode.h"

/**
 * Reads the current byte int the bytecode
 * and advances the ip pointer
 */
#define READ_BYTE() *ip++

class RktVM {
  public:
    RktVM() {}

    /**
     * Executes a program
     */
    void exec(const std::string &program) {
      // 1. Parse the program
      // auto ast = parser->parse(program)

      // 2. Compile program to Eva bytecode
      // code = compiler->compile(ast)
      code = {OP_HALT};

      // Set instruction pointer to the beginning
      ip = &code[0];
    }

    void eval() {
      for (;;) {
        switch (READ_BYTE()) {
          case OP_HALT:
            return;
        }
      }
    }

    /**
     * Instruction pointer (aka Program counter)
     */
    uint8_t* ip;

    /**
     * Bytecode
     */
    std::vector<uint8_t> code;
};

#endif