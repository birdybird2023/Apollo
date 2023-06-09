/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include "modules/canbus_vehicle/ch/proto/ch.pb.h"
#include "modules/drivers/canbus/can_comm/protocol_data.h"

namespace apollo {
namespace canbus {
namespace ch {

class Vehiclemodecommand116 : public ::apollo::drivers::canbus::ProtocolData<
                                  ::apollo::canbus::Ch> {
 public:
  static const int32_t ID;

  Vehiclemodecommand116();

  uint32_t GetPeriod() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'bit': 0, 'description': 'Request VIN(Command)', 'enum':
  // {0: 'VIN_REQ_CMD_VIN_REQ_DISABLE', 1: 'VIN_REQ_CMD_VIN_REQ_ENABLE'},
  // 'is_signed_var': False, 'len': 1, 'name': 'VIN_REQ_CMD', 'offset': 0.0,
  // 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '',
  // 'precision': 1.0, 'type': 'enum'}
  Vehiclemodecommand116* set_vin_req_cmd(
      Vehicle_mode_command_116::Vin_req_cmdType vin_req_cmd);

 private:
  // config detail: {'bit': 0, 'description': 'Request VIN(Command)', 'enum':
  // {0: 'VIN_REQ_CMD_VIN_REQ_DISABLE', 1: 'VIN_REQ_CMD_VIN_REQ_ENABLE'},
  // 'is_signed_var': False, 'len': 1, 'name': 'VIN_REQ_CMD', 'offset': 0.0,
  // 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '',
  // 'precision': 1.0, 'type': 'enum'}
  void set_p_vin_req_cmd(uint8_t* data,
                         Vehicle_mode_command_116::Vin_req_cmdType vin_req_cmd);

 private:
  Vehicle_mode_command_116::Vin_req_cmdType vin_req_cmd_;
};

}  // namespace ch
}  // namespace canbus
}  // namespace apollo
