#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  // Inisialisasi WiFi (Anda dapat menggunakan SSID dan kata sandi yang sesuai)
  WiFi.begin("nama_wifi", "kata_sandi_wifi");

  // Tunggu hingga terhubung ke WiFi
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Tidak dapat terhubung ke WiFi...");
  }

  // Memperoleh alamat MAC
  uint8_t mac[6];
  WiFi.macAddress(mac);

  Serial.print("MAC Address: ");
  for (int i = 0; i < 6; i++) {
    Serial.print(mac[i], HEX);
    if (i < 5) {
      Serial.print(":");
    }
  }
  Serial.println();
}

void loop() {
  // Kode loop Anda di sini
}
