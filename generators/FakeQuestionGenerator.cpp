#include "FakeQuestionGenerator.h"
#include "IQuestion.h"
#include "MultiChoiceQuestion.h"
#include <algorithm>
#include <memory>
#include <vector>

FakeQuestionGenerator::FakeQuestionGenerator() {}

auto FakeQuestionGenerator::GenerateQuestions(int questionCount,
                                              std::string &subject)
    -> std::vector<IQuestion*> {
  

  // generation of new questions, saving logic maybe needed ?
  if(m_questions.size() != size_t(0)){
    m_questions.clear();
  }

  for(int i = 0; i < questionCount; i++){
    auto question = std::make_unique<MultiChoiceQuestion>("what is 2 + 2", std::vector<std::string>{"1", "2"}, 1);
    m_questions.emplace_back(std::move(question));
  }

  std::vector<IQuestion*> questions{};

  std::transform(m_questions.begin(), m_questions.end(), questions.begin(), [](std::unique_ptr<IQuestion>& question){
    return question.get(); 
  });

  return questions;
}
