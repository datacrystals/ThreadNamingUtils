// Simple library to help manage thread names

#pragma once

#include <string>


std::string GetThreadName();
void GetThreadName(std::string &ThreadName);
void GetThreadName(std::string *ThreadName);