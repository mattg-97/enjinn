#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("A fatal test message: %f", 3.14f);
    KERROR("An error test message: %f", 3.14f);
    KWARN("A warn test message: %f", 3.14f);
    KINFO("An info test message: %f", 3.14f);
    KDEBUG("A debug test message: %f", 3.14f);
    KTRACE("A trace test message: %f", 3.14f);
    return 0;
}