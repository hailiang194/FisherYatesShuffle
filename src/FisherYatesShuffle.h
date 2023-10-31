#ifndef _FISHER_YATES_SHUFFLE_HPP_
#define _FISHER_YATES_SHUFFLE_HPP_

#include <stddef.h>

void suffle(void* ptr, size_t count, size_t size, size_t(*pick)(size_t));

#endif //!_FISHER_YATES_SHUFFLE_HPP_