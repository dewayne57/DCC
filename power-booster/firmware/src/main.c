#include <stdbool.h>
#include <stdint.h>

#include "project_config.h"

static volatile uint32_t heartbeat_counter;

static void system_initialize(void)
{
    heartbeat_counter = 0U;
}

static void application_step(void)
{
    heartbeat_counter++;
}

int main(void)
{
    system_initialize();

    while (true) {
        application_step();
    }

    return 0;
}
