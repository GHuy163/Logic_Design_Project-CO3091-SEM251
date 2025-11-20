#include "global.h"
#include "mainserver.h"
#include "task_power.h"

void setup()
{
	Serial.begin(115200);
	delay(3000);

	// xTaskCreate(power_demo_task, "Power Demo", 4096, NULL, 1, NULL);
	xTaskCreate(main_server_task, "Main Server", 8192, NULL, 2, NULL);
	xTaskCreate(blink_mode, "Blink Mode", 4096, NULL, 1, NULL);
}

void loop() {}