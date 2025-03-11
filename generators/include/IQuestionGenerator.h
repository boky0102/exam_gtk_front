#pragma once

#include "IQuestion.h"

///
/// This interface represents question generator
/// Purpose is to generate certain type of questions
/// and have a polymorphic class that all different
/// types of question generation can implement
/// for example ai generation, web db get, local json
/// files for testing etc...
///
class IQuestionGenerator {
public:
  virtual void GenerateQuestions(int questionCount, std::string &subject) = 0;
  virtual auto GetQuestions() -> std::vector<IQuestion *> = 0;
};
