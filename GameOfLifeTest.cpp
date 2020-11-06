#include "CppUTest/TestHarness.h"

extern "C"
{
#include "GameOfLife.h"
}

TEST_GROUP(TheGroupName)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

 TEST(TheGroupName, empty_one_cell_universe_stays_empty)
 {    
     STRCMP_EQUAL(".", generation((char *)"."));
 } 
 
 
 TEST(TheGroupName, empty_two_cell_universe_stays_empty)
 {    
     STRCMP_EQUAL("..", generation((char *)".."));
 } 
 
 TEST(TheGroupName, a_lonely_cell_dies)
 {    
     STRCMP_EQUAL(".", generation((char *)"*"));
 }
 
 TEST(TheGroupName, two_lonely_cells_die)
 {    
     STRCMP_EQUAL("..", generation((char *)"**"));
 }
 
 TEST(TheGroupName, an_empty_universe_stays_empty)
 {    
     STRCMP_EQUAL("", generation((char *)""));
 }
 
 TEST(TheGroupName, a_cell_with_company_lives)
 {    
     STRCMP_EQUAL(".*.", generation((char *)"***"));
 }
 
TEST(TheGroupName, cells_with_company_live)
{    
    STRCMP_EQUAL(".**.", generation((char *)"****"));
}


 // a simple example to start you off
    //LONGS_EQUAL(42, the_answer_is());
    //CHECK(1);
    //CHECK_TRUE(1);
    //CHECK_FALSE(0);
    //char[] =
  //FAIL("Start here");

