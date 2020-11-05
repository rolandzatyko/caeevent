#pragma once

#include "../../src/Event.h"
#include "NumberEventArgs.h"
#include "StringEventArgs.h"


namespace cae {
    class KeyEventListener {
    private:
        Event &iEventNum, &iEventStr;
        static void onNumber(const NumberEventArgs &iArgs);
        static void onString(const StringEventArgs &iArgs);
    public:
        KeyEventListener(Event& _iEventNum, Event& _iEventStr);
    };
}
