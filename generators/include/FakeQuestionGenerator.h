#pragma once

#include "IQuestion.h"
#include "IQuestionGenerator.h"

class FakeQuestionGenerator : public IQuestionGenerator {

public:
  FakeQuestionGenerator();
  void GenerateQuestions(int questionCount, std::string &subject) override;
  auto GetQuestions() -> std::vector<IQuestion *> override;
};
