// Pin untuk LED dan sensor analog (misalnya potensiometer)
const int ledPin = 16;
const int led2 = 18;
const int led3 = 19;
const int sensorPin = 4; // Gunakan pin ADC yang mendukung analog input

int sensorValue = 0;
int threshold = 500; // Nilai ambang batas untuk mengaktifkan berkedip

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(ledPin, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
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
      digitalWrite(ledPin, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);

    }
    
    // Tunggu sebentar agar tidak terlalu cepat bertambah
    delay(1000);
  } else {
 // turn LED off
 digitalWrite(ledPin, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 }
}
