#ifndef CAEEVENT_NUMBEREVENTARGS_H
#define CAEEVENT_NUMBEREVENTARGS_H

#include "../../src/Event.h"
#include "../../src/EventArgs.h"


namespace cae {

    class NumberEventArgs : public EventArgs {
    private:
        int arg;
    public:
        explicit NumberEventArgs(int _arg);
        int getArg() const;
    };
}

#endif //CAEEVENT_NUMBEREVENTARGS_H
