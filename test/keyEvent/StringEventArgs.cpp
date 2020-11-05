#include "StringEventArgs.h"

namespace cae {

    StringEventArgs::StringEventArgs(std::string _arg) : arg(_arg) {}

    std::string StringEventArgs::getArg() const  { return arg; }
}
