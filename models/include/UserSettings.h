#pragma once

#include "stdafx.h"
#include "ExamTypes.h"


// This class is responsible for represenation
// of the user settings in the model, when created
// it needs to load the data from the disk with previously
// saved user settings or preferebly load them from the 
// remote source  
//
//  More ideas are welcome here, it is subject to change
//
class UserSettings{

public:
  UserSettings(Types::Connection prefferedConnectionType);
};
