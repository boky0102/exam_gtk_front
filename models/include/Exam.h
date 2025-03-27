#pragma once

#include "stdafx.h"
#include "utility/include/IAiConnection.h"
#include "types/ExamTypes.h"
#include "UserSettings.h"

// This is the main class of the desktop applciation
// user selectd the exams settings and this class is created
// in the model and it needs to fire a signal that will update 
// the view with the necessary data
class Exam {
public:
  Exam(std::string& subject, IAiConnection* connection, UserSettings userSettings);
  
  ~Exam() = default;

private:
  IAiConnection* m_aiConnection;
  

}
