#include "FakeQuestionGenerator.h"
#include "MultiChoiceQuestion.h"
#include <vector>

FakeQuestionGenerator::FakeQuestionGenerator() {}

auto FakeQuestionGenerator::GenerateQuestions(int questionCount,
                                              std::string &subject)
    -> std::vector<IQuestion> {
  
  auto question = MultiChoiceQuestion("what is 2 + 2", std::vector<std::string>{"1", "2"}, 1);
  return std::vector<IQuestion>{question};

}
