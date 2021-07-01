

#include <gtest/gtest.h>
#include "myclass.h"

TEST(TestMyClass, First) {
    MyClass obj;

    ASSERT_TRUE(obj.isValid());
}
