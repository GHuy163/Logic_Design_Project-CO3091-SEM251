#include "global.h"

SemaphoreHandle_t xBinarySemaphoreInternet = xSemaphoreCreateBinary();
SemaphoreHandle_t xSemaphoreCreateMutex = xSemaphoreCreateMutex();