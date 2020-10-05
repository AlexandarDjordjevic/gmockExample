#include <Student.hpp>

namespace Student{

  Student::Student(IDatabase* databaseConnector)
    : m_databaseConnector(databaseConnector)
  {
    m_databaseConnector->connect();
  }

  Student::~Student(){

  }

  int Student::getIndexNo() 
  {
    m_databaseConnector->query();
  }


}//namespace Student