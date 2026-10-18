#pragma once

#include <stdint.h>
#include <stddef.h>

namespace threadnetwork {

const int32_t THREADNETWORK_TELEMETRY_DATA_REPORTED = 738;
const int32_t THREADNETWORK_TOPO_ENTRY_REPEATED = 739;
const int32_t THREADNETWORK_DEVICE_INFO_REPORTED = 740;

struct BytesField {
  BytesField(char const* array, size_t len) : arg(array), arg_length(len) {}
  char const* arg;
  size_t arg_length;
};

int stats_write(int32_t code, const BytesField& arg1, const BytesField& arg2,
                const BytesField& arg3, const BytesField& arg4, const BytesField& arg5);

int stats_write(int32_t code, const BytesField& arg1);

int stats_write(int32_t code, const char* arg1, const char* arg2, int32_t arg3, const char* arg4);

}  // namespace threadnetwork
