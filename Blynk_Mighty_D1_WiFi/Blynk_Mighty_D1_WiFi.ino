#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL6gK4qIqxl"
#define BLYNK_TEMPLATE_NAME "powermeter"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
#include <PZEM004Tv30.h>

char auth[] = "ch6VCQ0nj_iVfs__J_K_k843aWt1s7Wn";
char ssid[] = "Factory2_2.4G";
char pass[] = "118factory2";

// D5=RX(接TX), D6=TX(接RX)
SoftwareSerial pzemSW(D5, D6);
PZEM004Tv30 pzem(pzemSW);


float voltage, current, power, energy;
BlynkTimer timer;

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, sendPowerData);
}

void loop() {
  voltage = pzem.voltage();
  current = pzem.current();
  power   = pzem.power();
  energy  = pzem.energy();
  Blynk.run();
  timer.run();
}

void sendPowerData() {
  if (isnan(voltage)) voltage = 0;
  if (isnan(current)) current = 0;
  if (isnan(power))   power = 0;
  if (isnan(energy))  energy = 0;

  Serial.print("Voltage: "); Serial.print(voltage); Serial.println(" V");
  Serial.print("Current: "); Serial.print(current); Serial.println(" A");
  Serial.print("Power: ");   Serial.print(power);   Serial.println(" W");
  Serial.print("Energy: ");  Serial.print(energy); Serial.println(" Wh");
  Serial.println("-------------------------");

  Blynk.virtualWrite(V5, voltage);
  Blynk.virtualWrite(V6, current);
  Blynk.virtualWrite(V7, power);
  Blynk.virtualWrite(V8, energy);
}

