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
  ![Buatlah program agar ketika LED menyala, maka pada Serial Monitor akan __menampilkan angka yang akan bertambah setiap kali sensor disentuh](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/06fac717-dc2c-4501-a93d-6ba2926786dc)

  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: Menginisialisasi pin `ledPin` sebagai output untuk mengontrol LED.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600.
  ##### *Fungsi `loop()`*
  - *sensorValue = analogRead(sensorPin);*: Membaca nilai analog dari sensor yang terhubung ke pin `sensorPin`.
  - *if (sensorValue > threshold) { ... }*: Jika nilai sensor melebihi nilai ambang batas (`threshold`), maka: Mengaktifkan LED berkedip dengan santai menggunakan loop `for`, nyala-mati setiap setengah detik, dan sambil santai nunggu sebentar sebelum berkedip lagi. 
  ##### Langkah 9
  ##### *Fungsi deklarasi Pin* 
  - Kode Pin ini terdapat pendeklarasian pin untuk 3 lampu LED, yang diberi nama `ledPin`, `led2`, dan `led3` dan satu pin untuk sensor analog (sensorPin) dideklarasikan.
  ##### *Fungsi variabel*
  - `sensorValue` menyimpan nilai analog yang dibaca dari sensor. `threshold`dapat disebut nilai ambang batas dimana jika `sensorValue` melebihi nilai ini, LED akan berkedip.
  ##### *Fungsi `setup()`*
  - Mengatur pin LED sebagai output dan untuk memulai komunikasi serial dengan baud rate 9600.
  ##### *Fungsi `loop()`*
  - Membaca nilai dari sensor analog. Jika nilai sensor melebihi ambang batas, maka akan ada perulangan untuk membuat ketiga LED berkedip secara bergantian dengan interval 500ms. Setelah itu, menunggu 1 detik sebelum mengulang. Dan jika nilai sensor tidak melebihi ambang batas, semua LED dimatikan.
    
2. Mengakses Sensor DHT 11 (Single Wire / BUS)
  ##### Langkah 3
  ##### *Fungsi deklarasi dan pengaturan awal*
  - Langkah awal mendeskripsikan pin untuk sensor DHT (`DHTPIN`), tipe sensor DHT (`DHTTYPE`), pin LED (`LED_PIN`), dan pin buzzer (`BUZZER_PIN`). Kemudian membuat objek DHT bernama `dht` menggunakan pin DHT dan tipe DHT yang sudah didekripsikan diawal tadi, sehingga dapat inisialisasi pin sebagai output dan memulai komunikasi serial.\
  ##### *Fungsi `loop()`*
  - Dapat dilihat nilai suhu disimpan dalam variabel temperature. Setelah itu, program memeriksa apakah nilai suhu tersebut valid (bukan NaN). Jika nilainya valid maka program akan lanjut menyesuaikan keluaran berdasarkan nilai suhu tersebut. Jika suhu lebih dari atau sama dengan 30 derajat Celsius, keluaran LEDnya nyala dan menghasilkan bunyi dari buzzer dengan frekuensi 1000 Hz selama 100 milidetik, kemudian mematikan bunyi selama 100 milidetik. Sebaliknya, jika suhu kurang dari 30 derajat Celsius, LED akan berkedip sebanyak lima kali dengan interval 500 milidetik. Program ini memberikan tanggapan visual dan suara yang bergantung pada kondisi suhu sekitar, memberikan informasi yang berguna melalui LED dan buzzer.
  Mari kita analisis setiap fungsi dalam potongan kode tersebut:
  ##### Langkah 4
  ##### *Fungsi deklarasi library dan pin*
   - Mengatur kode dengan mendeklarasikan dua library, yaitu SPI dan MFRC522 yang digunakan untuk berkomunikasi dengan modul RFID MFRC522. Selain itu Pin SS_PIN dan RST_PIN diatur untuk komunikasi SPI antara ESP32 dan modul RFID.
  ##### *Fungsi deklarasi library dan pin `setup()`*
  - Komunikasi serial dengan baud rate 9600 memungkinkan pertukaran informasi dengan komputer melalui Serial Monitor. Langkah selanjutnya menginisialisasi komunikasi SPI melalui perintah `SPI.begin()`, yang diperlukan untuk berkomunikasi dengan modul RFID MFRC522. Setelah itu, modul RFID MFRC522 diinisialisasi menggunakan `rfid.PCD_Init()`. Inisialisasi ini melibatkan konfigurasi awal yang diperlukan agar modul RFID dapat berfungsi dengan benar. Terakhir, sebuah pesan informatif ditampilkan di Serial Monitor, memberi tahu pengguna untuk menyentuhkan tag RFID atau NFC ke pembaca.
  ##### *Fungsi Loop*
  - Code untuk mengecek apakah ada tag baru yang ditempatkan di depan pembaca menggunakan `rfid.PICC_IsNewCardPresent()`. Jika tag baru telah terdeteksi, maka membaca serial number (NUID) dari tag menggunakan `rfid.PICC_ReadCardSerial()`. Berikutnya untuk memeriksa tipe tag menggunakan `rfid.PICC_GetType(rfid.uid.sak)`. Code `keyTagUID` untuk membandingkan UID tag dengan UID yang ditentukan dalam array. Jika UID tag sesuai dengan `keyTagUID`, program menampilkan pesan "Access is granted". Sebaliknya UID tidak sesuai program akan menampilkan pesan "Access denied for user with UID" dan menampilkan UID tag yang tidak dikenal. Proses berlangsung dalam loop, terus memeriksa keberadaan tag RFID dan memberikan respons sesuai dengan UID tag yang dibaca.
    
3. Mengakses Sensor RFID (SPI Communication)
  ##### Langkah 4
  ##### *Fungsi menginisialisasi Modul RFID dan menentukan UID*
  - Mendiskripsikan library SPI dan MFRC522, menentukan pin SS (Slave Select) dan RST (Reset) untuk modul RFID MFRC522, membuat objek MFRC522 bernama rfid dengan pin SS dan RST yang telah ditentukan, dan menentukan UID yang diharapkan dari kartu RFID yang akan diakses.
  ##### *Fungsi `setup()`*
  - memulai komunikasi serial dengan baud rate 9600, menginisialisasi bus SPI dan modul MFRC522. selanjutnya menampilkan pesan di Serial Monitor untuk menunjukkan bahwa pembaca RFID siap digunakan dengan perintah "Tap RFID/NFC Tag on reader".
  ##### *Fungsi Loop*
  - Memeriksa apakah ada kartu RFID yang baru dihadirkan (`PICC_IsNewCardPresent`). Jika kartu baru hadir, membaca NUID kartu (`PICC_ReadCardSerial`). Untuk mengatur tipe kartu RFID dan memeriksa apakah UID kartu sesuai dengan UID yang ditentukan (`keyTagUID`). Menampilkan pesan "Access is granted" jika UID sesuai; sebaliknya, menampilkan pesan "Access denied" berserta UID kartu jika tidak sesuai. Menghentikan aktivitas kartu RFID (`PICC_HaltA`) dan menghentikan enkripsi pada PCD (Proximity Coupling Device). Keluaran program memberikan akses atau penolakan berdasarkan UID kartu RFID yang dihadirkan di dekat pembaca. Pesan-pesan status dan informasi UID ditampilkan di Serial Monitor untuk pemantauan dan debugging. Dalam program ini, akses diberikan jika UID kartu RFID sesuai dengan nilai yang ditentukan (`keyTagUID`).
   ##### Langkah 5
   ##### *Fungsi `setup()`*
  - Serial Communication: Membuka koneksi serial dengan kecepatan 115200 untuk debug.
  - DHT Sensor Initialization: Menginisialisasi sensor DHT11 pada pin digital 4.
  - Wi-Fi Connection: Menghubungkan ESP32 ke jaringan Wi-Fi yang telah ditentukan (ssid dan password).
  - Server Initialization: Membuat objek AsyncWebServer yang akan berjalan di port 80.
  - Routing: Menetapkan handler untuk tiga endpoint utama ("/", "/temperature", "/humidity").
  - Server Start: Memulai server.
  ##### *Fungsi readDHTTemperature*
  - Membaca suhu dari sensor DHT dan mengembalikan nilai suhu dalam format String. Jika pembacaan gagal, mengembalikan string "--".
  ##### *Fungsi readDHTHumidity*
  - Membaca kelembaban dari sensor DHT dan mengembalikan nilai kelembaban dalam format String. Jika pembacaan gagal, mengembalikan string "--".
  ##### *Fungsi index_html*
  - Digunakan oleh server untuk menampilkan nilai suhu dan kelembaban. Terdapat placeholder (%TEMPERATURE% dan %HUMIDITY%) yang akan digantikan oleh nilai aktual saat halaman dimuat.
  ##### *Fungsi processor*
  - Fungsi yang digunakan oleh server untuk menggantikan placeholder dalam template HTML dengan nilai aktual dari sensor. Menggunakan fungsi readDHTTemperature dan readDHTHumidity untuk mendapatkan nilai aktual.

#### D. KESIMPULAN
1. ESP32 Capacitive Touch Sensor, program ini menggunakan sensor sentuh pada ESP32 untuk mengontrol LED berdasarkan sentuhan pengguna. Membaca nilai sensor sentuh, dan jika disentuh, LED menyala dan pesan ditampilkan di Serial Monitor. Jika tidak disentuh, LED dimatikan.
2. Mengakses Sensor DHT 11 (Single Wire / BUS), program ini membaca suhu dari sensor DHT11 dan memberikan respons visual dan suara berdasarkan nilai suhu. Jika suhu melebihi 30 derajat Celsius, LED menyala dan buzzer berbunyi. Jika tidak, LED berkedip lima kali.
3. Mengakses Sensor RFID (SPI Communication), program ini menggunakan modul RFID MFRC522 untuk mengakses kartu RFID. 
