# include "../include/declaration.hpp"

// Test name and sub test name can be anything but try to keep it more meaningful
// generally its class name and test specific name
TEST(test_name, sub_test_name)
{
    // Arrange or initialize
    int value = 100;
    int increment = 5;

    // Act or call the function or perform operation
    value += increment;

    // Assert or compair the results
    ASSERT_EQ(value, 105);
}

TEST(TestClass, increment_by_5)
{
    TestClass object(50);
    
    object.increment(5);

    ASSERT_EQ(object.getValue(), 55);
}

TEST(TestClass, increment_by_7)
{
    TestClass object(50);
    
    object.increment(7);

    ASSERT_EQ(object.getValue(), 57);
}

TEST(TestClass, increment_by_10)
{
    TestClass object(50);
    
    object.increment(10);

    ASSERT_EQ(object.getValue(), 60);
}

// For test fixture macro is TEST_F and test name is name of struct
TEST_F(TestFixture, increment_by_7)
{  
    obj_ptr->increment(7);

    ASSERT_EQ(obj_ptr->getValue(), 17);
}

TEST_F(TestFixture, increment_by_10)
{
    obj_ptr->increment(10);

    ASSERT_EQ(obj_ptr->getValue(), 20);
}