// Copyright Leon Freist
// Author Leon Freist <freist@informatik.uni-freiburg.de>

#include <hwinfo/gpu.h>

#include <string>

namespace hwinfo {

// _____________________________________________________________________________________________________________________
std::string GPU::vendor() const { return _vendor; }

// ____________________________________________________________________________________________________________________
std::string GPU::name() const { return _name; }

// ____________________________________________________________________________________________________________________
std::string GPU::driverVersion() const { return _driverVersion; }

// _____________________________________________________________________________________________________________________
int GPU::id() const { return _id; }

// _____________________________________________________________________________________________________________________
int64_t GPU::memory_Bytes() const { return _memory_Bytes; }

// _____________________________________________________________________________________________________________________
int64_t GPU::frequency_MHz() const { return _frequency_MHz; }

// _____________________________________________________________________________________________________________________
int GPU::num_cores() const { return _num_cores; }

}  // namespace hwinfo