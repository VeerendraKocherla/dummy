#ifndef PIPESIM_EXECUTION_CONFIG_H_
#define PIPESIM_EXECUTION_CONFIG_H_

#include <cstdint>

namespace pipesim {

enum class ExecutionUnitKind {
  kAdd,
  kSub,
  kAnd,
  kOr,
  kXor,
  kControl,
  kAgu,
};


const char* ExecutionUnitKindName(ExecutionUnitKind kind);

}  // namespace pipesim

#endif  // PIPESIM_EXECUTION_CONFIG_H_
