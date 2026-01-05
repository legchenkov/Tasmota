/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

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

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/


#warning **** user_config_override.h: Using Settings from this File ****

#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Project -------------------------------------
#undef PROJECT
#define PROJECT                "BLESCAN32"

// -- Wifi ----------------------------------------
// -- Setup your own Wifi settings  ---------------

#undef  STA_SSID1
#define STA_SSID1         "Bichon"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "nemaneman"     // [Password1] Wifi password

#ifdef MY_IP
#undef WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS        "0.0.0.0"
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY           "192.168.32.1"
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS               "192.168.32.1"
#endif

// -- Setup your own MQTT settings  ---------------
#ifdef  MQTT_HOST
#undef  MQTT_HOST
#define MQTT_HOST         "192.168.32.39" // [MqttHost]
#endif

#ifdef  MQTT_PORT
#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)
#endif

// -- Features ------------------------------------
#define USE_BH1750
#define USE_BMP
#define USE_ATH2x

// -- ESP32 Bluetooth -----------------------------
#define USE_ESP32
#define USE_BLE_ESP32
#define BLE_ESP32_ENABLE true

// -- Rules ---------------------------------------
#define USE_RULES
  #define USER_RULE1 "ON System#Boot DO Backlog BLEAlias EE0CC55931EF=Valera DA6A321C2DFF=Anton D0622C929D93=Taya; AdcParam 6,0,4095,0,3300; BLEMode1; BLEScan0 0; BLEScan 9; RuleTimer1 10 endon"
  #define USER_RULE2 "ON Rules#Timer=1 DO Backlog BLEDevices; Delay 5; BLEMode0; RuleTimer2 50 endon"
  #define USER_RULE3 "ON Rules#Timer=2 DO Backlog BLEMode1; BLEScan 9; RuleTimer1 10 endon"

// -- Voltage Monitoring --------------------------
//#define USE_ADC
//#define USE_ESP32_SENSORS
#define MY_LANGUAGE            ru_RU

#undef USE_KNX_WEB_MENU

#ifdef TELE_PERIOD
#undef TELE_PERIOD
#define TELE_PERIOD 60
#endif

#ifdef APP_SLEEP
#undef APP_SLEEP
#define APP_SLEEP 50
#endif

#define USER_BACKLOG "Timezone 99; TimeStd 0,0,10,1,3,60; TimeDst 0,0,3,1,2,120; FriendlyName1 Bedroom; DeviceName Bedroom; Hostname Bedroom; MqttHost 192.168.32.39; Topic Bedroom; BLEAddrFilter 0; BLEMaxAge 60; so24 1; Rule1 1; Rule2 1; Rule3 1; GPIO4 640; GPIO17 608; GPIO22 256; GPIO36 4704"

#endif  // _USER_CONFIG_OVERRIDE_H_
