#include "IQuestionGenerator.h"
#include "IQuestion.h"
#include "stdafx.h"

class LocalQuestionGenerator : public IQuestionGenerator
{
public:
  LocalQuestionGenerator();
  
  std::vector<IQuestion*> GenerateQuestions(int questionCount, std::string& subject) override;

private:
  std::vector<std::unique_ptr<IQuestion>> m_questions;
  

};
