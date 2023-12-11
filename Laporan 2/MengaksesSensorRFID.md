## C. MeENGAKSES SENSOR RFID (SPI COMMUNICATION)
### RANGKAIAN
### HASIL DAN PEMBAHASAN
  ##### Langkah 4
  <img width="357" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/0da382cf-055f-4767-a532-87b5a109dc24">

  ##### *Fungsi menginisialisasi Modul RFID dan menentukan UID*
  - Mendiskripsikan library SPI dan MFRC522, menentukan pin SS (Slave Select) dan RST (Reset) untuk modul RFID MFRC522, membuat objek MFRC522 bernama rfid dengan pin SS dan RST yang telah ditentukan, dan menentukan UID yang diharapkan dari kartu RFID yang akan diakses.
  ##### *Fungsi `setup()`*
  - memulai komunikasi serial dengan baud rate 9600, menginisialisasi bus SPI dan modul MFRC522. selanjutnya menampilkan pesan di Serial Monitor untuk menunjukkan bahwa pembaca RFID siap digunakan dengan perintah "Tap RFID/NFC Tag on reader".
  ##### *Fungsi Loop*
  - Memeriksa apakah ada kartu RFID yang baru dihadirkan (`PICC_IsNewCardPresent`). Jika kartu baru hadir, membaca NUID kartu (`PICC_ReadCardSerial`). Untuk mengatur tipe kartu RFID dan memeriksa apakah UID kartu sesuai dengan UID yang ditentukan (`keyTagUID`). Menampilkan pesan "Access is granted" jika UID sesuai; sebaliknya, menampilkan pesan "Access denied" berserta UID kartu jika tidak sesuai. Menghentikan aktivitas kartu RFID (`PICC_HaltA`) dan menghentikan enkripsi pada PCD (Proximity Coupling Device). Keluaran program memberikan akses atau penolakan berdasarkan UID kartu RFID yang dihadirkan di dekat pembaca. Pesan-pesan status dan informasi UID ditampilkan di Serial Monitor untuk pemantauan dan debugging. Dalam program ini, akses diberikan jika UID kartu RFID sesuai dengan nilai yang ditentukan (`keyTagUID`).
   ##### Langkah 5
   <img width="727" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/274036de-9b07-4be9-91d8-1e15f8128377">

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
  - Membaca kelembaban dari sensor DHT dan mengembalikan3 nilai kelembaban dalam format String. Jika pembacaan gagal, mengembalikan string "--".
  ##### *Fungsi index_html*
  - Digunakan oleh server untuk menampilkan nilai suhu dan kelembaban. Terdapat placeholder (%TEMPERATURE% dan %HUMIDITY%) yang akan digantikan oleh nilai aktual saat halaman dimuat.
  ##### *Fungsi processor*
  - Fungsi yang digunakan oleh server untuk menggantikan placeholder dalam template HTML dengan nilai aktual dari sensor. Menggunakan fungsi readDHTTemperature dan readDHTHumidity untuk mendapatkan nilai aktual.