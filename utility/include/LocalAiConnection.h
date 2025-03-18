#include "IAiConnection.h"

class LocalAiConnection : public IAiConnection {

public:
  LocalAiConnection();

  ~LocalAiConnection() = default;

  bool EstablishConnection(std::string path) override;
  std::string Prompt(std::string question) override;

private:

  void GetData();

  std::string m_source;
  bool m_validConnection;
  std::string m_modelName;
};
