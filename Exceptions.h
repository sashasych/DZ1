// Copyright 2015 <SYCH>
#pragma once
#ifndef __EXCEPTIONS_H__
#define __EXCEPTIONS_H__
#include "./Exceptions.h"
#include <exception>
class ExceptBookNotFound:public std::exception {
 public:
    const char* what() const;
};
class ExceptYear : public std::exception {
 public:
    const char* what() const;
};
class ExceptPages : public std::exception {
 public:
    const char* what() const;
};
class ExceptTitle : public std::exception {
 public:
    const char* what() const;
};
class ExceptAuthor : public std::exception {
 public:
    const char* what() const;
};
class ExceptPublisher : public std::exception {
 public:
    const char* what() const;
};
class ExceptBookAlreadyExist : public std::exception {
 public:
    const char* what() const;
};
/*
class ExceptBo :public std::exception
{
public:
    const char* what();
};
class ExceptBookNotFound :public std::exception
{
public:
    const char* what();
};
*/
#endif
