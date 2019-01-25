#pragma once

#define WIN32_LEAN_AND_MEAN

#include"..\stdafx.h"
#include<windows.h>
#include<vector>
///
//directory reading functions
///
std::string Wchar_to_string(CHAR* wch);
LPCSTR string_to_w_char(std::string str);
void read_directory(const std::string& name, std::vector<std::string>& v);