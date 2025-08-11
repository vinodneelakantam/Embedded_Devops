#include <zephyr.h>

void main(void) {
    printk("Hello from Zephyr!\n");

    while (1) {
        k_sleep(K_SECONDS(1));
    }
}