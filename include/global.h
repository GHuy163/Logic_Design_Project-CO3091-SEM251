#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

#define LED_PIN 48
#define NEO_PIN 45
#define BOOT_PIN 0

extern String WIFI_SSID;
extern String WIFI_PASS;

extern String wifi_ssid;
extern String wifi_password;

typedef struct {
    float temp;
    float humi;
} DHT20_Data;

extern DHT20_Data dht_data;
extern SemaphoreHandle_t dht_mutex;

#endif