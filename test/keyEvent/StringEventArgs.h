#ifndef CAEEVENT_STRINGEVENTARGS_H
#define CAEEVENT_STRINGEVENTARGS_H

#include <string>
#include "../../src/Event.h"
#include "../../src/EventArgs.h"

namespace cae {

    class StringEventArgs : public EventArgs {
    private:
        std::string arg;
    public:
        explicit StringEventArgs(std::string _arg);
        std::string getArg() const;
    };

}


#endif //CAEEVENT_STRINGEVENTARGS_H
