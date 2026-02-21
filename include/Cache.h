#pragma once

#include "MainMemory.h"
#include "ReplacementAlgorithms.h"

#include <array>

const uint8_t MEMORY_ADDRESS_SIZE = 32;          // 32-bit memory addresses
const uint8_t CACHE_LINE_SIZE = 64;              // 64-byte cache lines
const uint32_t CACHE_SETS = 64;                  // Cache with 64 sets
const uint8_t CACHE_WAYS = 4;                    // 4-way set associative cache

const uint8_t CACHE_LINE_BYTE_OFFSET_SIZE = 6;
const uint8_t CACHE_LINE_SET_INDEX_SIZE = 6;
const uint8_t CACHE_LINE_TAG_SIZE = 20;

struct CacheLine
{
    uint8_t tag = 0;
    std::array<uint8_t, CACHE_LINE_SIZE> data;
    bool valid = false;
};


class Cache
{

};