#include <memory>

#include "lib2/public.h"

int main()
{
    auto p = std::make_unique<Public>();
    return 0;
}
