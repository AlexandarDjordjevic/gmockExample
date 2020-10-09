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
#include <string>

namespace Student
{
  class IDatabase{
  public:
    virtual bool Connect() = 0;
    virtual bool Disconnect() = 0;
    virtual bool IsConnected() = 0;
    virtual void Query(std::string query) = 0;
  private:
  };

} // namespace Student
