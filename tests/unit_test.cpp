//  Copyright 2013, bitdewy@gmail.com
//  Distributed under the Boost Software License, Version 1.0.
//  You may obtain a copy of the License at
//
//  http://www.boost.org/LICENSE_1_0.txt

#include <cppunittest.h>
#include "interprocess/server.h"

namespace unittest {

TEST_CLASS(UnitTest) {
 public:
  TEST_METHOD(TestMethod) {
    interprocess::Server server("test");
  }
};

}  // namespace unittest
