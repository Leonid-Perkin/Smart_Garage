// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace light;
using namespace switch_;
using namespace cover;
using namespace binary_sensor;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
web_server::WebServer *web_server_webserver;
using namespace sensor;
using namespace json;
preferences::IntervalSyncer *preferences_intervalsyncer;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
ledc::LEDCOutput *gpio_2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
ledc::LEDCOutput *gpio_12;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput;
light::LightState *light_lightstate;
light::PulseLightEffect *light_pulselighteffect;
light::PulseLightEffect *light_pulselighteffect_2;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput_2;
light::LightState *light_lightstate_2;
light::PulseLightEffect *light_pulselighteffect_3;
light::PulseLightEffect *light_pulselighteffect_4;
dht::DHT *dht_dht;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_3;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_2;
gpio::GPIOSwitch *open_switch;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_4;
gpio::GPIOSwitch *close_switch;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_5;
gpio::GPIOSwitch *open_case1;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_6;
gpio::GPIOSwitch *open_case2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_7;
gpio::GPIOSwitch *fan;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_8;
template_::TemplateCover *template__templatecover;
Automation<> *automation;
switch_::TurnOffAction<> *switch__turnoffaction;
switch_::TurnOnAction<> *switch__turnonaction;
DelayAction<> *delayaction;
switch_::TurnOffAction<> *switch__turnoffaction_2;
Automation<> *automation_2;
switch_::TurnOffAction<> *switch__turnoffaction_3;
switch_::TurnOnAction<> *switch__turnonaction_2;
DelayAction<> *delayaction_2;
switch_::TurnOffAction<> *switch__turnoffaction_4;
Automation<> *automation_3;
switch_::TurnOffAction<> *switch__turnoffaction_5;
switch_::TurnOffAction<> *switch__turnoffaction_6;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_9;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor_2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_10;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: esp-leonid
  //   build_path: .esphome/build/esp-leonid
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2022.12.8
  //   compile_process_limit: 1
  App.pre_setup("esp-leonid", __DATE__ ", " __TIME__, false);
  // light:
  // switch:
  // cover:
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Esp-Leonid Fallback Hotspot
  //     password: leonid2006
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: esp-leonid.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("esp-leonid.local");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Owl-RT");
  wifi_wifiap_2.set_password("un_cG5uZYV-GUX6R239");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Esp-Leonid Fallback Hotspot");
  wifi_wifiap.set_password("leonid2006");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   password: 8bbd84e9e0aac75596473543cde99da9
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("8bbd84e9e0aac75596473543cde99da9");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: uZ+KczecyzjIgUANwgKS/KhzMCK42cRz1ZRpF0+FX4w=
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_apiserver->set_noise_psk({185, 159, 138, 115, 55, 156, 203, 56, 200, 129, 64, 13, 194, 2, 146, 252, 168, 115, 48, 34, 184, 217, 196, 115, 213, 148, 105, 23, 79, 133, 95, 140});
  // web_server:
  //   local: true
  //   auth:
  //     username: admin
  //     password: '12345678'
  //   id: web_server_webserver
  //   port: 80
  //   version: 2
  //   web_server_base_id: web_server_base_webserverbase
  //   include_internal: false
  //   ota: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver = new web_server::WebServer(web_server_base_webserverbase);
  web_server_webserver->set_component_source("web_server");
  App.register_component(web_server_webserver);
  web_server_base_webserverbase->set_port(80);
  web_server_webserver->set_css_url("");
  web_server_webserver->set_js_url("https://oi.esphome.io/v2/www.js");
  web_server_webserver->set_allow_ota(true);
  web_server_base_webserverbase->set_auth_username("admin");
  web_server_base_webserverbase->set_auth_password("12345678");
  web_server_webserver->set_include_internal(false);
  // sensor:
  // json:
  //   {}
  // esp32:
  //   board: esp32dev
  //   framework:
  //     version: 2.0.5
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32 @ 5.2.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // output:
  // output.ledc:
  //   platform: ledc
  //   pin:
  //     number: 2
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin
  //     inverted: false
  //     drive_strength: 20.0
  //   id: gpio_2
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio_2 = new ledc::LEDCOutput(esp32_esp32internalgpiopin);
  gpio_2->set_component_source("ledc.output");
  App.register_component(gpio_2);
  gpio_2->set_zero_means_zero(false);
  gpio_2->set_frequency(1000.0f);
  // output.ledc:
  //   platform: ledc
  //   pin:
  //     number: 12
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_2
  //     inverted: false
  //     drive_strength: 20.0
  //   id: gpio_12
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_2->set_inverted(false);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio_12 = new ledc::LEDCOutput(esp32_esp32internalgpiopin_2);
  gpio_12->set_component_source("ledc.output");
  App.register_component(gpio_12);
  gpio_12->set_zero_means_zero(false);
  gpio_12->set_frequency(1000.0f);
  // light.monochromatic:
  //   platform: monochromatic
  //   output: gpio_2
  //   name: Light above the work area
  //   effects:
  //   - pulse:
  //       transition_length: 1s
  //       update_interval: 1s
  //       name: Pulse
  //     type_id: light_pulselighteffect
  //   - pulse:
  //       name: Fast Pulse
  //       transition_length: 500ms
  //       update_interval: 500ms
  //     type_id: light_pulselighteffect_2
  //   disabled_by_default: false
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: monochromatic_monochromaticlightoutput
  monochromatic_monochromaticlightoutput = new monochromatic::MonochromaticLightOutput();
  light_lightstate = new light::LightState(monochromatic_monochromaticlightoutput);
  App.register_light(light_lightstate);
  light_lightstate->set_component_source("light");
  App.register_component(light_lightstate);
  light_lightstate->set_name("Light above the work area");
  light_lightstate->set_disabled_by_default(false);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_flash_transition_length(0);
  light_lightstate->set_gamma_correct(2.8f);
  light_pulselighteffect = new light::PulseLightEffect("Pulse");
  light_pulselighteffect->set_transition_length(1000);
  light_pulselighteffect->set_update_interval(1000);
  light_pulselighteffect_2 = new light::PulseLightEffect("Fast Pulse");
  light_pulselighteffect_2->set_transition_length(500);
  light_pulselighteffect_2->set_update_interval(500);
  light_lightstate->add_effects({light_pulselighteffect, light_pulselighteffect_2});
  monochromatic_monochromaticlightoutput->set_output(gpio_2);
  // light.monochromatic:
  //   platform: monochromatic
  //   output: gpio_12
  //   name: General light
  //   effects:
  //   - pulse:
  //       transition_length: 1s
  //       update_interval: 1s
  //       name: Pulse
  //     type_id: light_pulselighteffect_3
  //   - pulse:
  //       name: Fast Pulse
  //       transition_length: 500ms
  //       update_interval: 500ms
  //     type_id: light_pulselighteffect_4
  //   disabled_by_default: false
  //   id: light_lightstate_2
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: monochromatic_monochromaticlightoutput_2
  monochromatic_monochromaticlightoutput_2 = new monochromatic::MonochromaticLightOutput();
  light_lightstate_2 = new light::LightState(monochromatic_monochromaticlightoutput_2);
  App.register_light(light_lightstate_2);
  light_lightstate_2->set_component_source("light");
  App.register_component(light_lightstate_2);
  light_lightstate_2->set_name("General light");
  light_lightstate_2->set_disabled_by_default(false);
  light_lightstate_2->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate_2->set_default_transition_length(1000);
  light_lightstate_2->set_flash_transition_length(0);
  light_lightstate_2->set_gamma_correct(2.8f);
  light_pulselighteffect_3 = new light::PulseLightEffect("Pulse");
  light_pulselighteffect_3->set_transition_length(1000);
  light_pulselighteffect_3->set_update_interval(1000);
  light_pulselighteffect_4 = new light::PulseLightEffect("Fast Pulse");
  light_pulselighteffect_4->set_transition_length(500);
  light_pulselighteffect_4->set_update_interval(500);
  light_lightstate_2->add_effects({light_pulselighteffect_3, light_pulselighteffect_4});
  monochromatic_monochromaticlightoutput_2->set_output(gpio_12);
  // sensor.dht:
  //   platform: dht
  //   pin:
  //     number: 5
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_3
  //     inverted: false
  //     drive_strength: 20.0
  //   temperature:
  //     name: Garage temperature
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Humidity in the garage
  //     disabled_by_default: false
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: humidity
  //     state_class: measurement
  //   update_interval: 60s
  //   id: dht_dht
  //   model: AUTO_DETECT
  dht_dht = new dht::DHT();
  dht_dht->set_update_interval(60000);
  dht_dht->set_component_source("dht.sensor");
  App.register_component(dht_dht);
  esp32_esp32internalgpiopin_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_3->set_pin(::GPIO_NUM_5);
  esp32_esp32internalgpiopin_3->set_inverted(false);
  esp32_esp32internalgpiopin_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_3->set_flags(gpio::Flags::FLAG_INPUT);
  dht_dht->set_pin(esp32_esp32internalgpiopin_3);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Garage temperature");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_device_class("temperature");
  sensor_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor->set_unit_of_measurement("\302\260C");
  sensor_sensor->set_accuracy_decimals(1);
  sensor_sensor->set_force_update(false);
  dht_dht->set_temperature_sensor(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Humidity in the garage");
  sensor_sensor_2->set_disabled_by_default(false);
  sensor_sensor_2->set_device_class("humidity");
  sensor_sensor_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  dht_dht->set_humidity_sensor(sensor_sensor_2);
  dht_dht->set_dht_model(dht::DHT_MODEL_AUTO_DETECT);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 16
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_4
  //     inverted: false
  //     drive_strength: 20.0
  //   name: Garage door opening button
  //   id: open_switch
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  open_switch = new gpio::GPIOSwitch();
  App.register_switch(open_switch);
  open_switch->set_name("Garage door opening button");
  open_switch->set_disabled_by_default(false);
  open_switch->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  open_switch->set_component_source("gpio.switch");
  App.register_component(open_switch);
  esp32_esp32internalgpiopin_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_4->set_pin(::GPIO_NUM_16);
  esp32_esp32internalgpiopin_4->set_inverted(false);
  esp32_esp32internalgpiopin_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  open_switch->set_pin(esp32_esp32internalgpiopin_4);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_5
  //     inverted: false
  //     drive_strength: 20.0
  //   name: Garage door closing button
  //   id: close_switch
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  close_switch = new gpio::GPIOSwitch();
  App.register_switch(close_switch);
  close_switch->set_name("Garage door closing button");
  close_switch->set_disabled_by_default(false);
  close_switch->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  close_switch->set_component_source("gpio.switch");
  App.register_component(close_switch);
  esp32_esp32internalgpiopin_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_5->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_5->set_inverted(false);
  esp32_esp32internalgpiopin_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_5->set_flags(gpio::Flags::FLAG_OUTPUT);
  close_switch->set_pin(esp32_esp32internalgpiopin_5);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 22
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_6
  //     inverted: false
  //     drive_strength: 20.0
  //   name: open_case1
  //   id: open_case1
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  open_case1 = new gpio::GPIOSwitch();
  App.register_switch(open_case1);
  open_case1->set_name("open_case1");
  open_case1->set_disabled_by_default(false);
  open_case1->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  open_case1->set_component_source("gpio.switch");
  App.register_component(open_case1);
  esp32_esp32internalgpiopin_6 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_6->set_pin(::GPIO_NUM_22);
  esp32_esp32internalgpiopin_6->set_inverted(false);
  esp32_esp32internalgpiopin_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_6->set_flags(gpio::Flags::FLAG_OUTPUT);
  open_case1->set_pin(esp32_esp32internalgpiopin_6);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 21
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_7
  //     inverted: false
  //     drive_strength: 20.0
  //   name: open_case2
  //   id: open_case2
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  open_case2 = new gpio::GPIOSwitch();
  App.register_switch(open_case2);
  open_case2->set_name("open_case2");
  open_case2->set_disabled_by_default(false);
  open_case2->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  open_case2->set_component_source("gpio.switch");
  App.register_component(open_case2);
  esp32_esp32internalgpiopin_7 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_7->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin_7->set_inverted(false);
  esp32_esp32internalgpiopin_7->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_7->set_flags(gpio::Flags::FLAG_OUTPUT);
  open_case2->set_pin(esp32_esp32internalgpiopin_7);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 33
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_8
  //     inverted: false
  //     drive_strength: 20.0
  //   name: fan
  //   id: fan
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  fan = new gpio::GPIOSwitch();
  App.register_switch(fan);
  fan->set_name("fan");
  fan->set_disabled_by_default(false);
  fan->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  fan->set_component_source("gpio.switch");
  App.register_component(fan);
  esp32_esp32internalgpiopin_8 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_8->set_pin(::GPIO_NUM_33);
  esp32_esp32internalgpiopin_8->set_inverted(false);
  esp32_esp32internalgpiopin_8->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_8->set_flags(gpio::Flags::FLAG_OUTPUT);
  fan->set_pin(esp32_esp32internalgpiopin_8);
  // cover.template:
  //   platform: template
  //   name: Garage Door
  //   open_action:
  //     then:
  //     - switch.turn_off:
  //         id: close_switch
  //       type_id: switch__turnoffaction
  //     - switch.turn_on:
  //         id: open_switch
  //       type_id: switch__turnonaction
  //     - delay: 1s
  //       type_id: delayaction
  //     - switch.turn_off:
  //         id: open_switch
  //       type_id: switch__turnoffaction_2
  //     trigger_id: trigger
  //     automation_id: automation
  //   close_action:
  //     then:
  //     - switch.turn_off:
  //         id: open_switch
  //       type_id: switch__turnoffaction_3
  //     - switch.turn_on:
  //         id: close_switch
  //       type_id: switch__turnonaction_2
  //     - delay: 1s
  //       type_id: delayaction_2
  //     - switch.turn_off:
  //         id: close_switch
  //       type_id: switch__turnoffaction_4
  //     trigger_id: trigger_2
  //     automation_id: automation_2
  //   stop_action:
  //     then:
  //     - switch.turn_off:
  //         id: close_switch
  //       type_id: switch__turnoffaction_5
  //     - switch.turn_off:
  //         id: open_switch
  //       type_id: switch__turnoffaction_6
  //     trigger_id: trigger_3
  //     automation_id: automation_3
  //   optimistic: true
  //   assumed_state: true
  //   disabled_by_default: false
  //   id: template__templatecover
  //   has_position: false
  //   restore_mode: RESTORE
  template__templatecover = new template_::TemplateCover();
  template__templatecover->set_component_source("template.cover");
  App.register_component(template__templatecover);
  App.register_cover(template__templatecover);
  template__templatecover->set_name("Garage Door");
  template__templatecover->set_disabled_by_default(false);
  automation = new Automation<>(template__templatecover->get_open_trigger());
  switch__turnoffaction = new switch_::TurnOffAction<>(close_switch);
  switch__turnonaction = new switch_::TurnOnAction<>(open_switch);
  delayaction = new DelayAction<>();
  delayaction->set_component_source("template.cover");
  App.register_component(delayaction);
  delayaction->set_delay(1000);
  switch__turnoffaction_2 = new switch_::TurnOffAction<>(open_switch);
  automation->add_actions({switch__turnoffaction, switch__turnonaction, delayaction, switch__turnoffaction_2});
  automation_2 = new Automation<>(template__templatecover->get_close_trigger());
  switch__turnoffaction_3 = new switch_::TurnOffAction<>(open_switch);
  switch__turnonaction_2 = new switch_::TurnOnAction<>(close_switch);
  delayaction_2 = new DelayAction<>();
  delayaction_2->set_component_source("template.cover");
  App.register_component(delayaction_2);
  delayaction_2->set_delay(1000);
  switch__turnoffaction_4 = new switch_::TurnOffAction<>(close_switch);
  automation_2->add_actions({switch__turnoffaction_3, switch__turnonaction_2, delayaction_2, switch__turnoffaction_4});
  automation_3 = new Automation<>(template__templatecover->get_stop_trigger());
  switch__turnoffaction_5 = new switch_::TurnOffAction<>(close_switch);
  switch__turnoffaction_6 = new switch_::TurnOffAction<>(open_switch);
  automation_3->add_actions({switch__turnoffaction_5, switch__turnoffaction_6});
  template__templatecover->set_has_position(false);
  template__templatecover->set_optimistic(true);
  template__templatecover->set_assumed_state(true);
  template__templatecover->set_restore_mode(template_::COVER_RESTORE);
  template__templatecover->set_has_position(false);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 17
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_9
  //     drive_strength: 20.0
  //   name: motion1
  //   device_class: motion
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor
  gpio_gpiobinarysensor = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor);
  gpio_gpiobinarysensor->set_name("motion1");
  gpio_gpiobinarysensor->set_disabled_by_default(false);
  gpio_gpiobinarysensor->set_device_class("motion");
  gpio_gpiobinarysensor->set_component_source("gpio.binary_sensor");
  App.register_component(gpio_gpiobinarysensor);
  esp32_esp32internalgpiopin_9 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_9->set_pin(::GPIO_NUM_17);
  esp32_esp32internalgpiopin_9->set_inverted(true);
  esp32_esp32internalgpiopin_9->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_9->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor->set_pin(esp32_esp32internalgpiopin_9);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 25
  //     inverted: false
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_10
  //     drive_strength: 20.0
  //   name: motion2
  //   device_class: motion
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor_2
  gpio_gpiobinarysensor_2 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor_2);
  gpio_gpiobinarysensor_2->set_name("motion2");
  gpio_gpiobinarysensor_2->set_disabled_by_default(false);
  gpio_gpiobinarysensor_2->set_device_class("motion");
  gpio_gpiobinarysensor_2->set_component_source("gpio.binary_sensor");
  App.register_component(gpio_gpiobinarysensor_2);
  esp32_esp32internalgpiopin_10 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_10->set_pin(::GPIO_NUM_25);
  esp32_esp32internalgpiopin_10->set_inverted(false);
  esp32_esp32internalgpiopin_10->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_10->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor_2->set_pin(esp32_esp32internalgpiopin_10);
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   {}
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
