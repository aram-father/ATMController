/**
 * @file error.cc
 * @author aram_father@naver.com
 * @brief Class for error
 * @version 0.1
 * @date 2022-02-17
 *
 * MIT License
 * Copyright (c) 2022 aram-father
 *
 */
#include "error.hpp"

using namespace std;

namespace atm_controller
{
Error::Error() : code_(kNone), info_("")
{
}

Error::Error(const ErrorCode code, const string& info, const char* func_name = "") : code_(code), info_(info)
{
  info_ += string(func_name);
}

Error::operator bool() const
{
  return code_ != Error::ErrorCode::kNone;
}

Error::ErrorCode Error::code() const
{
  return code_;
}

const std::string& Error::info() const
{
  return info_;
}
}  // namespace atm_controller