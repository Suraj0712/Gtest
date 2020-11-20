#include <gtest/gtest.h>
#include <iostream>

using namespace std;

class TestClass
{
private:
    int value;

public:
    TestClass(int _value = 0) : value(_value)
    {
        cout << "Constructor invoked: \n";
    }

    void increment(int value);

    int getValue();
};

struct TestFixture : public testing::Test
{
    TestClass *obj_ptr;

    void SetUp();

    void TearDown();
};