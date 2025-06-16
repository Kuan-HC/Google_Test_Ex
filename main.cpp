#include <iostream>
#include <vector>
#include "gtest/gtest.h"

using namespace std;

int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

TEST(FactorialTest, Positive) {
/*  
    ASSERT_*：當測試失敗時，會終止測試函式的執行。
    EXPECT_*：測試失敗時不會終止函式執行，允許報告多個錯誤。
*/
  ASSERT_EQ(1, Factorial(1));
  ASSERT_EQ(2, Factorial(2));
  ASSERT_EQ(6, Factorial(3));

}


int main(int argc, char **argv)
{
    /*  
        RUN_ALL_TESTS() 會執行所有測試，並根據結果回傳 0 或 1。
        必須先呼叫 testing::InitGoogleTest(&argc, argv); 來初始化 GoogleTest 的設定。
    */
   printf("Running main() from %s\n", __FILE__);
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}