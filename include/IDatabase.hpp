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

    virtual bool connect() = 0;
    virtual void query() = 0;
  private:
  };

} // namespace Student
