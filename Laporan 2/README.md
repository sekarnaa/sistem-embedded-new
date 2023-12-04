<h1 align="center">LAPORAN PRAKTIKUM SISTEM EMBEDDED</h1>
<h2 align="center"> PROTOKOL KOMUNIKASI DAN SENSOR</h2>
<br>
<p align="center">
  <img src="https://en.polines.ac.id/images/logo_bw.jpg" width="200" height="200">
<br>
<br>PUTRI SEKAR ARIANA
<br>TE-3A
<br>4.31.21.0.21</p>
<br>
<b><p align="center">PROGRAM STUDI D4 TEKNIK TELEKOMUNIKASI</p>
<p style="font-family:courier;" align="center">POLITEKNIK NEGERI SEMARANG</p>
<p style="font-family:courier;" align="center">2023</p></b>


#### A. ABSTRAK
Praktikum ini bertujuan untuk memberikan pemahaman mengenai cara kerja protokol komunikasi pada ESP32, seperti UART, I2C, OneWire, dan SPI. Dari pemahaman tersebut dapat menerapkan pengetahuan itu dalam mengakses berbagai jenis sensor. Selain itu, dapat memahami bagaimana cara menciptakan perangkat IoT yang praktis dengan memanfaatkan memanfaatkan transducer sensor dan actuator. 

#### B. ALAT DAN BAHAN 
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT 11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)
##### Metode
1. UART (Universal Asynchronous Receiver Transmitter): Protokol komunikasi serial yang umum digunakan untuk mentransfer data antara perangkat secara asinkron.
2. SPI (Serial Peripheral Interface): Protokol data serial sinkron yang digunakan untuk komunikasi cepat antara mikrokontroler dan perangkat periferal, seperti sensor atau modul eksternal.
3. I2C (Inter-Integrated Circuit): Protokol komunikasi serial yang menggunakan dua jalur (SDA dan SCL) untuk mentransfer data antara perangkat pada kecepatan tinggi.
4. Sensor Data (DHT11, RFID): Menggunakan sensor DHT11 untuk membaca data suhu dan kelembaban, serta modul RFID untuk membaca informasi dari kartu RFID.
5. Kontrol IoT: Menghubungkan ESP32 ke internet dan melakukan kontrol perangkat secara remote.

#### C. HASIL DAN PEMBAHASAN
1. ESP32 Capacitive Touch Sensor
  ##### Langkah 6
  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: Mendefinisikan pin *ledPin* sebagai output, yang berarti untuk mengontrol LED.
  - *pinMode(touchSensorPin, INPUT);*: Mendefinisikan pin *touchSensorPin* sebagai input, yang digunakan untuk membaca nilai   dari sensor sentuh.
  - *digitalWrite(ledPin, LOW);*: Mematikan LED pada awalnya dengan mengeset output pin *ledPin* menjadi LOW.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600 untuk penggunaan fungsi *Serial.print()*.
  ##### *Fungsi `loop()`*
  - *int sensorValue = digitalRead(touchSensorPin);*: Membaca nilai dari pin sensor sentuh dan menyimpannya dalam variabel     *sensorValue*.
  - *if (sensorValue == HIGH) { ... }*: Jika di sentuh HIGH (disentuh), maka: LED menyala (*digitalWrite(ledPin, HIGH);*),     meningkatkan nilai variabel *counter*, mengirim pesan ke Serial Monitor yang berisi informasi bahwa sensor disentuh dan       nilai counter.
  - *else { ... }*: Jika nilai sensor sentuh LOW (tidak disentuh), maka: LED mati (*digitalWrite(ledPin, LOW);*), mencetak     pesan ke Serial Monitor bahwa sensor tidak disentuh dan LED mati.
  - *delay(100);*: Menambahkan penundaan 100 milidetik untuk menghindari pembacaan sensor yang terlalu cepat dan mengurangi    noise yang mungkin terjadi.
  ##### Langkah 7
  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: pin *ledPin* sebagai output untuk mengontrol LED.
  - *pinMode(led2, OUTPUT);*: pin *led2* sebagai output untuk mengontrol LED kedua.
  - *pinMode(led3, OUTPUT);*:pin *led3* sebagai output untuk mengontrol LED ketiga.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600.
  ##### Fungsi `loop()`
  - *sensorValue = analogRead(sensorPin);*: Membaca nilai analog dari sensor yang terhubung ke pin *sensorPin*.
  - *if (sensorValue > threshold) { ... }*: Jika nilai sensor melebihi nilai ambang batas (*threshold*), maka: Mengaktifkan    berkedip LED menggunakan loop *for* yang mengatur tiga LED secara bergantian, waktu delay (*delay(1000)*) agar tidak         terlalu cepat bertambah.
  - *else { ... }*: Jika nilai sensor tidak melebihi ambang batas, matikan semua LED.
  ##### Langkah 8
  
3. pp
4. l
#### D. KESIMPULAN

![20211119_085406mm](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/6eacc1e4-2418-4d8f-8a93-5d0ebd72fc12)

