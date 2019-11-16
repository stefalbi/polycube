/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* PacketJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  PacketJsonObject : public JsonObjectBase {
public:
  PacketJsonObject();
  PacketJsonObject(const nlohmann::json &json);
  ~PacketJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Capture length
  /// </summary>
  uint32_t getCapturelen() const;
  void setCapturelen(uint32_t value);
  bool capturelenIsSet() const;
  void unsetCapturelen();

  /// <summary>
  /// Packet length
  /// </summary>
  uint32_t getPacketlen() const;
  void setPacketlen(uint32_t value);
  bool packetlenIsSet() const;
  void unsetPacketlen();

  /// <summary>
  /// timestamp - seconds
  /// </summary>
  uint32_t getTimestampSeconds() const;
  void setTimestampSeconds(uint32_t value);
  bool timestampSecondsIsSet() const;
  void unsetTimestampSeconds();

  /// <summary>
  /// timestamp - microseconds
  /// </summary>
  uint32_t getTimestampMicroseconds() const;
  void setTimestampMicroseconds(uint32_t value);
  bool timestampMicrosecondsIsSet() const;
  void unsetTimestampMicroseconds();

  /// <summary>
  /// packet raw data
  /// </summary>
  std::string getRawdata() const;
  void setRawdata(std::string value);
  bool rawdataIsSet() const;
  void unsetRawdata();

private:
  uint32_t m_capturelen;
  bool m_capturelenIsSet;
  uint32_t m_packetlen;
  bool m_packetlenIsSet;
  uint32_t m_timestampSeconds;
  bool m_timestampSecondsIsSet;
  uint32_t m_timestampMicroseconds;
  bool m_timestampMicrosecondsIsSet;
  std::string m_rawdata;
  bool m_rawdataIsSet;
};

}
}
}
