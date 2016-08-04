#include <stdint.h>

#include "defines.hpp"
#include "call_frame.hpp"

#include "interpreter/instructions.hpp"

#include "builtin/object.hpp"

intptr_t rubinius::int_clear_exception(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
#include "instructions/clear_exception.hpp"

  return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
}