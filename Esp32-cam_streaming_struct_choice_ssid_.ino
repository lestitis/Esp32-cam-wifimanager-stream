#include "esp_camera.h"
//#include <WiFi.h>
#include <WiFiManager.h> // https://github.com/tzapu/WiFiManager
#include "esp_timer.h"
#include "img_converters.h"
#include "Arduino.h"
#include "fb_gfx.h"
#include "soc/soc.h" //disable brownout problems
#include "soc/rtc_cntl_reg.h"  //disable brownout problems
#include "esp_http_server.h"

#include "initialisation.h"

void setup() {
#include "ini_setup.h"

void loop() {
  delay(1);
}
