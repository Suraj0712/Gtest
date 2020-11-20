#include "../include/declaration.hpp"

void TestClass::increment(int i_value)
{
    value += i_value;
}

int TestClass::getValue()
{
    return value;
}

void TestFixture::SetUp()
{
    obj_ptr = new TestClass(10);
    cout <<"from fixture \n";
}

void TestFixture::TearDown()
{
    delete obj_ptr;
    obj_ptr = nullptr;
}