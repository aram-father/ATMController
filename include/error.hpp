/**
 * @file error.hpp
 * @author aram_father@naver.com
 * @brief Class for error
 * @version 0.1
 * @date 2022-02-17
 *
 * MIT License
 * Copyright (c) 2022 aram-father
 *
 */
#ifndef __ERROR_HPP__
#define __ERROR_HPP__

#include <string>

namespace atm_controller
{
class Error
{
public:
  enum ErrorCode
  {
    kNone = 0,
    kTimeout = 1
    // TODO: Define more error code
  };

private:
  ErrorCode code_;
  std::string info_;

public:
  explicit Error();
  explicit Error(const ErrorCode code, const std::string& info, const char* func_name = "");
  explicit operator bool() const;

  ErrorCode code() const;
  const std::string& info() const;
};
}  // namespace atm_controller

#endif