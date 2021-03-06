/**
* lbrp API
* lbrp API generated from lbrp.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* ServiceBackendJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  ServiceBackendJsonObject : public JsonObjectBase {
public:
  ServiceBackendJsonObject();
  ServiceBackendJsonObject(const nlohmann::json &json);
  ~ServiceBackendJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// IP address of the backend server of the pool
  /// </summary>
  std::string getIp() const;
  void setIp(std::string value);
  bool ipIsSet() const;

  /// <summary>
  /// Port where the server listen to (this value is ignored in case of ICMP)
  /// </summary>
  uint16_t getPort() const;
  void setPort(uint16_t value);
  bool portIsSet() const;

  /// <summary>
  /// Weight of the backend in the pool
  /// </summary>
  uint16_t getWeight() const;
  void setWeight(uint16_t value);
  bool weightIsSet() const;
  void unsetWeight();

private:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_ip;
  bool m_ipIsSet;
  uint16_t m_port;
  bool m_portIsSet;
  uint16_t m_weight;
  bool m_weightIsSet;
};

}
}
}
}

