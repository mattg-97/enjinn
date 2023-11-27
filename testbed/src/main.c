#include <core/logger.h>
#include <core/asserts.h>
#include <platform/platform.h>

int main(void) {
    KFATAL("A fatal test message: %f", 3.14f);
    KERROR("An error test message: %f", 3.14f);
    KWARN("A warn test message: %f", 3.14f);
    KINFO("An info test message: %f", 3.14f);
    KDEBUG("A debug test message: %f", 3.14f);
    KTRACE("A trace test message: %f", 3.14f);

    platform_state state;
    if (platform_startup(&state, "Enjinn test bed", 100, 100, 1280, 720)) {
        while (TRUE) {
            platform_pump_messages(&state);
        }
    }

    platform_shutdown(&state);
    return 0;
}