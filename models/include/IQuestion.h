#pragma once
#include "stdafx.h"

class IQuestion {

  virtual auto GetQuestion() const -> std::string = 0;
  virtual void SetQuestion(std::string) = 0;
  virtual auto GetAnswer() const -> std::string = 0;
};
