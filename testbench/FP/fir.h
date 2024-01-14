#ifndef __FIR_H__
#define __FIR_H__

#include <stdint.h>
#include <stdbool.h>

#define AP          (*(volatile uint32_t*)0x30000100)

#define data_len    (*(volatile uint32_t*)0x30000110)

#define tap0        (*(volatile uint32_t*)0x30000140)
#define tap1        (*(volatile uint32_t*)0x30000144)
#define tap2        (*(volatile uint32_t*)0x30000148)
#define tap3        (*(volatile uint32_t*)0x3000014c)
#define tap4        (*(volatile uint32_t*)0x30000150)
#define tap5        (*(volatile uint32_t*)0x30000154)
#define tap6        (*(volatile uint32_t*)0x30000158)
#define tap7        (*(volatile uint32_t*)0x3000015c)
#define tap8        (*(volatile uint32_t*)0x30000160)
#define tap9        (*(volatile uint32_t*)0x30000164)
#define tap10       (*(volatile uint32_t*)0x30000168)

#define X           (*(volatile uint32_t*)0x30000180)
#define Y           (*(volatile uint32_t*)0x30000184) 

int outputsignal[64];

#endif
