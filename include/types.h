#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <stddef.h>

// Register attributes.
#define _rw volatile
#define w volatile
#define r volatile const

// Unsigned.
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// Signed.
typedef int8_t  s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

// Floating point.
typedef float  f32;
typedef double f64;

typedef struct String {
    char* text;
    u32 size;
} String;

#endif
