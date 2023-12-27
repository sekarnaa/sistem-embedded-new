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
<p align="justify"> Praktikum ini bertujuan untuk memberikan pemahaman mengenai cara kerja protokol komunikasi pada ESP32, seperti UART, I2C, OneWire, dan SPI. Dari pemahaman tersebut dapat menerapkan pengetahuan itu dalam mengakses berbagai jenis sensor. Selain itu, dapat memahami bagaimana cara menciptakan perangkat IoT yang praktis dengan memanfaatkan memanfaatkan transducer sensor dan actuator. </p>

Adapun sub-job pada jobsheet ini yaitu:
  1. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/A.%20Koneksi%20MQTT%20Broker">Koneksi MQTT Broker</a>
  2. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/B.%20Menerima%20Data%20JSON%20Melalui%20Protokol%20MQTT">Menerima Data JSON Melalui Protokol MQTT</a>
  3. <a href="https://github.com/raolaay/SistemEmbedded/tree/master/Josbheet%206/C.%20Mengirim%20Dummy%20Data%20untuk%20Simulasi%20IO%20Menggunakan%20Hardware">Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware</a>
  
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

#### C. KESIMPULAN
1. ESP32 Capacitive Touch Sensor, program ini menggunakan sensor sentuh pada ESP32 untuk mengontrol LED berdasarkan sentuhan pengguna. Membaca nilai sensor sentuh, dan jika disentuh, LED menyala dan pesan ditampilkan di Serial Monitor. Jika tidak disentuh, LED dimatikan.
2. Mengakses Sensor DHT 11 (Single Wire / BUS), program ini membaca suhu dari sensor DHT11 dan memberikan respons visual dan suara berdasarkan nilai suhu. Jika suhu melebihi 30 derajat Celsius, LED menyala dan buzzer berbunyi. Jika tidak, LED berkedip lima kali.
3. Mengakses Sensor RFID (SPI Communication), program ini menggunakan modul RFID MFRC522 untuk mengakses kartu RFID. 
