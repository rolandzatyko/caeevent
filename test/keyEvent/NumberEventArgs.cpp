#include "NumberEventArgs.h"

namespace cae {

    NumberEventArgs::NumberEventArgs(int _arg) : arg(_arg) {}

    int NumberEventArgs::getArg() const { return arg; }
}
