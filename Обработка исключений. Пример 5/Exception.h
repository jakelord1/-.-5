#pragma once

class Exception
{
protected:
    char m_message[100];
public:
    Exception(const char* message);

    virtual const char* GetMessage() const;
};

class IndexException : public Exception {
public:
    IndexException(const char* message) : Exception(message) {};
    virtual const char* GetMessage() const { return m_message; }
};