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

    /**
     * @brief This is the function used to connect to the database
     * 
     * @return true on success, false on fail
     */
    bool ConnectToDatabase();

    /**
     * @brief This is the function used to disconnect from the database
     * 
     * @return none
     */
    void DisconnectFromDatabase();
    
    /**
     * @brief This is the function used to query index number
     * 
     * @param std::string Name 
     * @return int Index
     */
    int QueryIndex(std::string Name);

    /**
     * @brief This is the function used to query student name
     * 
     * @param int index 
     * @return std::string Name
     */
    std::string QueryName(int index);

  private:
      IDatabase* m_databaseConnector;
  };

} // namespace Student
