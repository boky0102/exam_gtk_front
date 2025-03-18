#include "LocalAiConnection.h"
#include "cpr/cpr.h"

LocalAiConnection::LocalAiConnection(){
  m_source = "bla";

}


bool LocalAiConnection::EstablishConnection(std::string path){
  cpr::Response res = cpr::Get(cpr::Url("http://localhost:11434"));
  
  std::cout << res.status_code << std::endl;

  if(res.status_code == 200){
    return true;
  }

  return false;

}

std::string LocalAiConnection::Prompt(std::string question){
  return std::string("hi");
}
