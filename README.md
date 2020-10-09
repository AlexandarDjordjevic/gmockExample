# Student 

Database interface:

```cpp 
  class IDatabase{
  public:
    virtual bool Connect() = 0;
    virtual bool Disconnect() = 0;
    virtual bool IsConnected() = 0;
    virtual void Query(std::string query) = 0;
  private:
  };
```

Student wrapper class implementation:

```cpp
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
     * @brief This is the function used to query index number.
     *        This function should handle reconnection with database in case when the connection is down.
     *
     * @param std::string Name
     * @return int Index
     */
    int QueryIndex(std::string Name);

    /**
     * @brief This is the function used to query student name.
     *        This function should handle reconnection with database in case when the connection is down.
     *
     * @param int index
     * @return std::string Name
     */
    std::string QueryName(int index);

  private:
      IDatabase* m_databaseConnector;
```
