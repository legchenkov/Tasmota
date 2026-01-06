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

// -- Disable Features ----------------------------
#undef I2CDRIVERS_1
#undef I2CDRIVERS_2
#undef I2CDRIVERS_3
#undef I2CDRIVERS_4
#undef I2CDRIVERS_5
#undef I2CDRIVERS_6
#undef I2CDRIVERS_8
#undef I2CDRIVERS_9
#undef I2CDRIVERS_10
#undef I2CDRIVERS_11
#undef I2CDRIVERS_12
#undef I2CDRIVERS_13
#undef I2CDRIVERS_14
#undef I2CDRIVERS_15
#undef I2CDRIVERS_16
#undef I2CDRIVERS_17
#undef I2CDRIVERS_18
#undef I2CDRIVERS_19
#undef I2CDRIVERS_20
#undef I2CDRIVERS_21
#undef I2CDRIVERS_22
#undef I2CDRIVERS_23
#undef I2CDRIVERS_24
#undef I2CDRIVERS_25
#undef I2CDRIVERS_26
#undef I2CDRIVERS_27
#undef I2CDRIVERS_28
#undef I2CDRIVERS_29
#undef I2CDRIVERS_30
#undef I2CDRIVERS_31
#undef I2CDRIVERS_32
#undef I2CDRIVERS_33
#undef I2CDRIVERS_34
#undef I2CDRIVERS_35
#undef I2CDRIVERS_36
#undef I2CDRIVERS_37
#undef I2CDRIVERS_38
#undef I2CDRIVERS_39
#undef I2CDRIVERS_40
#undef I2CDRIVERS_41
#undef I2CDRIVERS_42
#undef I2CDRIVERS_44
#undef I2CDRIVERS_45
#undef I2CDRIVERS_46
#undef I2CDRIVERS_47
#undef I2CDRIVERS_48
#undef I2CDRIVERS_49
#undef I2CDRIVERS_50
#undef I2CDRIVERS_51
#undef I2CDRIVERS_52
#undef I2CDRIVERS_53
#undef I2CDRIVERS_54
#undef I2CDRIVERS_55
#undef I2CDRIVERS_56
#undef I2CDRIVERS_57
#undef I2CDRIVERS_58
#undef I2CDRIVERS_59
#undef I2CDRIVERS_60
#undef I2CDRIVERS_61
#undef I2CDRIVERS_62
#undef I2CDRIVERS_63
#undef I2CDRIVERS_64
#undef I2CDRIVERS_65
#undef USE_DS18x20
#undef USE_DHT
#undef USE_SHT
#undef USE_HTU
#undef USE_IR_REMOTE
#undef USE_IR_RECEIVE
#undef USE_RF433
#undef USE_RC_SWITCH
#undef USE_WS2812
#undef USE_TUYA
#undef USE_ARILUX_RF
#undef USE_SR04
#undef USE_TM1638
#undef USE_HX711
#undef USE_PZEM004T
#undef USE_MHZ19
#undef USE_SENSEAIR
#undef USE_PMS5003
#undef USE_MPU6050
#undef USE_MCP230xx
#undef USE_MPR121
#undef USE_CCS811
#undef USE_MHZ19_SERIAL
#undef USE_SONOFF_SC
#undef USE_SONOFF_RF
#undef USE_SONOFF_L1
#undef USE_DOMOTICZ
#undef USE_HOME_ASSISTANT
#undef USE_EMULATION
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_KNX
#undef USE_ELECTRIQ
#undef USE_TELEGRAM
#undef USE_TIMERS_WEB
#undef USE_SUNRISE
#undef USE_DISCOVERY
#undef USE_ADC
#undef USE_SERIAL_BRIDGE
#undef USE_MQTT_TLS
#undef USE_MQTT_TLS_CA_CERT
#undef USE_MQTT_TLS_FORCE_EC_CIPHER
#undef USE_MQTT_AWS_IOT_LIGHT
#undef USE_MQTT_OVER_WEBSOCKETS
#undef USE_I2S_AUDIO_OUTPUT
#undef USE_SPI
#undef USE_DISPLAY
#undef USE_DISPLAY_LCD
#undef USE_DISPLAY_OLED
#undef USE_DISPLAY_EPD
#undef USE_DISPLAY_MATRIX
#undef USE_DISPLAY_ILI9341
#undef USE_DISPLAY_EPAPER_29
#undef USE_DISPLAY_EPAPER_42
#undef USE_DISPLAY_ILI9488
#undef USE_DISPLAY_RA8876
#undef USE_DISPLAY_SEVENSEG
#undef USE_DISPLAY_SH1106
#undef USE_DISPLAY_SSD1351
#undef USE_DISPLAY_SSD1351_SPI
#undef USE_DISPLAY_ST7789
#undef USE_DISPLAY_ST7789V
#undef USE_DISPLAY_ST7789V2
#undef USE_DISPLAY_SSD1331
#undef USE_VEML6070

// -- Features ------------------------------------
#define USE_BH1750
#define USE_BMP
#define USE_AHT2x

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
#define USE_ADC
#define USE_ESP32_SENSORS
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

#define USER_BACKLOG "Timezone 99; TimeStd 0,0,10,1,3,60; TimeDst 0,0,3,1,2,120; FriendlyName1 Kitchen; DeviceName Kitchen; Hostname Kitchen; MqttHost 192.168.32.39; Topic Kitchen; BLEAddrFilter 0; BLEMaxAge 60; so24 1; Rule1 1; Rule2 1; Rule3 1; GPIO4 608; GPIO17 640; GPIO22 256; GPIO36 4704; I2CDriver12 0"

#endif  // _USER_CONFIG_OVERRIDE_H_
