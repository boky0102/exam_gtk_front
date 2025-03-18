#pragma once

#include "IQuestion.h"
#include "IQuestionGenerator.h"

class FakeQuestionGenerator : public IQuestionGenerator {

public:
  FakeQuestionGenerator();
  std::vector<IQuestion> GenerateQuestions(int questionCount,
                                           std::string &subject) override;
};
