#include "stdafx.h"

class IAiConnection {
public:
  virtual bool EstablishConnection(std::string) = 0;
  virtual std::string Prompt(std::string) = 0;
};
