// Copyright 2015 <SYCH>
#include "stdafx.h"
#include "Exceptions.h"
const char* ExceptBookNotFound::what() const {
    return "book not found";
}
const char* ExceptYear::what() const {
    return "Year is invalid";
}
const char* ExceptPages::what() const {
    return "Pages are invalid";
}
const char* ExceptTitle::what() const {
    return "Title is invalid";
}
const char* ExceptAuthor::what() const {
    return "Author is invalid";
}
const char* ExceptPublisher::what() const {
    return "Publisher is invalid";
}
const char* ExceptBookAlreadyExist::what() const {
    return "book Already Exist";
}
