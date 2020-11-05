set(TARGET_NAME keyEvent)

add_executable(${TARGET_NAME}
        KeyEventListener.cpp
        NumberEventArgs.cpp
        StringEventArgs.cpp
        ../../src/Event.cpp
        main.cpp
        )
