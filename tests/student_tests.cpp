#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <Student.hpp>
#include <IDatabase.hpp>


class DatabaseConnectorMock : public Student::IDatabase
{
  public:
    MOCK_METHOD(bool, connect, (), (override));
    MOCK_METHOD(void, query, (), (override));
};

TEST(Student, TestConnection){
  DatabaseConnectorMock databaseConnection;
  EXPECT_CALL(databaseConnection, connect()).Times(::testing::AtLeast(1));
  Student::Student student(&databaseConnection);
}

TEST(Student, TestQuery){
  ::testing::NiceMock<DatabaseConnectorMock> databaseConnection;
  EXPECT_CALL(databaseConnection, query()).Times(::testing::AtLeast(1));
  Student::Student student(&databaseConnection);
  student.getIndexNo();
}

TEST(Student, TestParameters){
  ::testing::NiceMock<DatabaseConnectorMock> databaseConnection;
  EXPECT_CALL(databaseConnection, query()).Times(::testing::Exactly(0));
  Student::Student student(&databaseConnection);
  student.getIndexNo();
}
