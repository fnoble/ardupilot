// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-
/*
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  u-blox UBX GPS driver for ArduPilot and ArduPilotMega.
//	Code by Michael Smith, Jordi Munoz and Jose Julio, DIYDrones.com
//
//  UBlox Lea6H protocol: http://www.u-blox.com/images/downloads/Product_Docs/u-blox6_ReceiverDescriptionProtocolSpec_%28GPS.G6-SW-10018%29.pdf

#ifndef __AP_GPS_SBP_H__
#define __AP_GPS_SBP_H__

#include <AP_GPS.h>

class AP_GPS_SBP : public AP_GPS_Backend
{
public:
	AP_GPS_SBP(AP_GPS &_gps, AP_GPS::GPS_State &_state, AP_HAL::UARTDriver *_port);

    // Methods
    bool read();

    static bool _detect(struct SBP_detect_state &state, uint8_t data);

};

#endif // __AP_GPS_SBP_H__
