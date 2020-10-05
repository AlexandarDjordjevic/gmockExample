/**
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#pragma once

#include <IDatabase.hpp>

namespace Student
{
  class Student{
  public:
    /**
     * @brief Default contstructor
     * 
     */
    Student(IDatabase* databaseConnector);

    /**
     * @brief Default destructor
     * 
     */
    ~Student();

    Student(const Student &) = delete;
    Student &operator=(const Student &) = delete;
    Student(Student &&) = delete;
    Student &operator=(const Student &&) = delete;

    int getIndexNo();
  private:
      IDatabase* m_databaseConnector;
  };

} // namespace Student
