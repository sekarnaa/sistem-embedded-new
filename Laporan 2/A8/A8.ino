// Pin untuk LED dan sensor analog (misalnya potensiometer)
const int ledPin = 16;
const int sensorPin = 4; // Gunakan pin ADC yang mendukung analog input

int sensorValue = 0;
int threshold = 500; // Nilai ambang batas untuk mengaktifkan berkedip

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(ledPin, OUTPUT);
  
  // Memulai komunikasi serial dengan baud rate 9600
  Serial.begin(9600);
}

void loop() {
  // Baca nilai sensor analog
  sensorValue = analogRead(sensorPin);

  // Jika nilai sensor melebihi ambang batas
  if (sensorValue > threshold) {
    // Blink LED
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin, HIGH); // LED menyala
      delay(500); // Tunggu 500ms (setengah detik)
      digitalWrite(ledPin, LOW); // LED mati
      delay(500); // Tunggu 500ms (setengah detik)
    }
    
    // Tunggu sebentar agar tidak terlalu cepat bertambah
    delay(1000);
  }
}
