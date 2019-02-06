/*
   Copyright 2018 - The OPRECOMP Project Consortium, Alma Mater Studiorum
   Università di Bologna. All rights reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <gtest/gtest.h>
#include <flexfloat.hpp>
#include <cfenv>
#include <cmath>

namespace {

#ifdef FLEXFLOAT_FLAGS

TEST(FlexFloatExceptionFlagTest, DivByZero) {
    const double a = 1.0;
    const double b = 0.0;
    feclearexcept(FE_ALL_EXCEPT);
    flexfloat<3, 3> ff_a, ff_b, ff_c;
    ff_a = a;
    ff_b = b;
    ff_c = ff_a / ff_b;
    EXPECT_EQ(fetestexcept(FE_ALL_EXCEPT), FE_DIVBYZERO);
}

TEST(FlexFloatExceptionFlagTest, Inexact) {
    const double a = 1.2;
    flexfloat<3, 3> ff_a;
    feclearexcept(FE_ALL_EXCEPT);
    ff_a = a;
    EXPECT_EQ(fetestexcept(FE_ALL_EXCEPT), FE_INEXACT);
}

TEST(FlexFloatExceptionFlagTest, Invalid) {
    const double a = 0.0;
    const double b = 0.0;
    flexfloat<3, 3> ff_a, ff_b, ff_c;
    feclearexcept(FE_ALL_EXCEPT);
    ff_a = a;
    ff_b = b;
    ff_c = ff_a / ff_b;
    EXPECT_EQ(fetestexcept(FE_ALL_EXCEPT), FE_INVALID);
}

TEST(FlexFloatExceptionFlagTest, Overflow) {
    const double a = 8.0;
    flexfloat<3, 3> ff_a, ff_c;
    feclearexcept(FE_ALL_EXCEPT);
    ff_a = a;
    ff_c = ff_a * ff_a;
    EXPECT_EQ(fetestexcept(FE_ALL_EXCEPT), FE_INEXACT | FE_OVERFLOW);
}

TEST(FlexFloatExceptionFlagTest, Underflow) {
    const double a = 0.125;
    flexfloat<3, 3> ff_a;
    feclearexcept(FE_ALL_EXCEPT);
    ff_a = a;
    EXPECT_EQ(fetestexcept(FE_ALL_EXCEPT), FE_UNDERFLOW);
}

#endif /* FLEXFLOAT_FLAGS */
} // namespace
