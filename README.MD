## Google test 
	1. Based on Xunit architecture 
	2. Portable and reusable 
	3. Writing the unit test in c++ 

## Installation 
```
$ sudo apt-get install libgtest-dev  
$ sudo apt-get install cmake  
$ cd /usr/src/gtest  
$ sudo cmake CMakeLists.txt 
$ sudo make 
$ sudo cp *.a /usr/lib 
```

## Testing file structure  

Project_folder 
```
├── CMakeLists.txt 
├── include 
│   └── declaration.hpp 
├── src 
│   ├── implementation.cpp 
│   └── main.cpp 
├── README.MD
└── test 
    └── test.cpp 
```
 
## Building the project and execution 
```
$ cd Project_folder 
$ mkdir build && cd build 
$ cmake .. 
$ make 
$ ./<executable> 
```

## Unit test structure 

1. Arrange - > Preparation phase we create objects, set variable in this stage 
2. Act -> Query phase we call the respective method or check condition 
3. Assert -> Evaluation phase we check the result with expected results 
4. Unit test characteristics 
	Independent 
	Small 
	Should run in milliseconds 
	Good practice to have only one assertion per test case 

5. Example TEST macro 

TEST(<test_name>, <sub_test>) 
{ 
	//Arrange 
	//Act 
	//Assert 
} 

## Google test Assertions 

|Status   |Macro   |results                                                                 |
|---------|--------|------------------------------------------------------------------------|
|Success  |        |Test case passed                                                        |
|Non-fatal failure| EXPECT_| Test case failed control will return after executing the entire test   |
|Fatal failure| ASSERT_| Test case failed control will return immediately after failure         |

## Basic assertion available in google test

Fatal assertion            | Nonfatal assertion         | Verifies
-------------------------- | -------------------------- | --------------------
`ASSERT_TRUE(condition);`  | `EXPECT_TRUE(condition);`  | `condition` is true
`ASSERT_FALSE(condition);` | `EXPECT_FALSE(condition);` | `condition` is false

 Fatal assertion          | Nonfatal assertion       | Verifies
------------------------ | ------------------------ | --------------
`ASSERT_EQ(val1, val2);` | `EXPECT_EQ(val1, val2);` | `val1 == val2`
`ASSERT_NE(val1, val2);` | `EXPECT_NE(val1, val2);` | `val1 != val2`
`ASSERT_LT(val1, val2);` | `EXPECT_LT(val1, val2);` | `val1 < val2`
`ASSERT_LE(val1, val2);` | `EXPECT_LE(val1, val2);` | `val1 <= val2`
`ASSERT_GT(val1, val2);` | `EXPECT_GT(val1, val2);` | `val1 > val2`
`ASSERT_GE(val1, val2);` | `EXPECT_GE(val1, val2);` | `val1 >= val2`

| Fatal assertion                | Nonfatal assertion             | Verifies                                                 |
| --------------------------     | ------------------------------ | -------------------------------------------------------- |
| `ASSERT_STREQ(str1,str2);`     | `EXPECT_STREQ(str1,str2);`     | the two C strings have the same content   		     |
| `ASSERT_STRNE(str1,str2);`     | `EXPECT_STRNE(str1,str2);`     | the two C strings have different contents 		     |
| `ASSERT_STRCASEEQ(str1,str2);` | `EXPECT_STRCASEEQ(str1,str2);` | the two C strings have the same content, ignoring case   |
| `ASSERT_STRCASENE(str1,str2);` | `EXPECT_STRCASENE(str1,str2);` | the two C strings have different contents, ignoring case |


## Test Fixtures 

1. Test fixture is a place holder for common test codes 
2. Increase the reusability of code 
3. Generally to handle the arrange part we use the test fixture 
4. When we use test fixture we need to use the TEST_F macro 
5. We also need to override the SetUp() and TearDown() method 
6. Sample test fixture  

	Struct TestFixture : public testing::Test 
	{ 
	// DEFINE object on the heap 
	// void SetUp() {Initialize the object} 
	// void TearDown() {delete the object} 
	}
7. sample test macro
	TEST_F(< fixture class name >, sub test name)
	{  
		// ACT
		// ASSERTION
	}
