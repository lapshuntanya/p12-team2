#ifndef P12_TEAM2_MYEXCEPTION_H
#define P12_TEAM2_MYEXCEPTION_H

#include <exception>
#include <string>
#include <utility>

class MyException : public std::exception {
    std::string m_Message;
public:
    MyException() : m_Message("Unknown Exception\n") {}

    MyException(std::string msg) : m_Message (std::move(msg)) {}

    virtual ~MyException() = default;

    virtual const char *what() const noexcept {
        return m_Message.c_str();
    }

     /*
      * Пример использования:
      *
        try{
            if(str.empty())
                throw MyException("Name in empty\n");
        }
        catch (MyException& exception) {
            std::cout << exception.what();
        }
      */
};

#endif //P12_TEAM2_MYEXCEPTION_H
