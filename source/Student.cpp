#include <Student.hpp>

namespace Student{

  Student::Student(IDatabase* databaseConnector)
    : m_databaseConnector(databaseConnector)
  {

  }
  
  bool Student::ConnectToDatabase() 
  {
    
  }
  
  void Student::DisconnectFromDatabase() 
  {
    
  }
  
  int Student::QueryIndex(std::string Name) 
  {
    
  }
  
  std::string Student::QueryName(int index) 
  {
    
  }

  Student::~Student(){

  }
}//namespace Student