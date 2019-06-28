#pragma once

#include <stdexcept>


namespace snsdl
{

class Exception :
    public std::runtime_error
{
public:
    Exception(const char *);
    virtual ~Exception() = default;
};


class ExceptionFromSdl :
    public Exception
{
public:
    ExceptionFromSdl();
    virtual ~ExceptionFromSdl() = default;
};


class ExceptionFromSdlTtf :
    public Exception
{
public:
    ExceptionFromSdlTtf();
    virtual ~ExceptionFromSdlTtf() = default;
};


class ExceptionFromSdlMixer :
    public Exception
{
public:
    ExceptionFromSdlMixer();
    virtual ~ExceptionFromSdlMixer() = default;
};

}
