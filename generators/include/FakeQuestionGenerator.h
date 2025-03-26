#pragma once

#include "IQuestion.h"
#include "IQuestionGenerator.h"


// convenience class for testing question 
// generators
class FakeQuestionGenerator : public IQuestionGenerator {

public:
  FakeQuestionGenerator();
  std::vector<IQuestion*> GenerateQuestions(int questionCount,
                                           std::string &subject) override;

private:
  std::vector<std::unique_ptr<IQuestion>> m_questions;
};
