#include "LocalAiConnection.h"
#include "cpr/cpr.h"

LocalAiConnection::LocalAiConnection(){
  m_source = "bla";
}


bool LocalAiConnection::EstablishConnection(std::string path){
 
  cpr::Response r = cpr::Get(cpr::Url(path));

  if(r.status_code != 200){
    return false;
  }

  return true;
}

std::string LocalAiConnection::Prompt(std::string question){
  return std::string("hi");
}
