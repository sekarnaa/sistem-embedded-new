## C. MENGAKSES SENSOR RFID (SPI COMMUNICATION)
### RANGKAIAN
<img width="313" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/e80db27b-0187-44ea-8308-e5c8cce65ab6">

### HASIL DAN PEMBAHASAN
  ##### Langkah 4 (Program dengan mendekatkan kartu atau Tag RFID ke RFID Reader)
Kode program dapat dilihat<a href="https://github.com/sekarnaa/sistem-embedded-new/blob/97aed20fcec879998a54174b932d4957c65bdf58/Laporan%202/C4.ino"> di sini</a>
  <img width="357" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/0da382cf-055f-4767-a532-87b5a109dc24">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/6dba4494-e8a2-4dde-9631-e7cc673b4b7d


  ##### *Fungsi menginisialisasi Modul RFID dan menentukan UID*
<p align="justify"> Mendiskripsikan library SPI dan MFRC522, menentukan pin SS (Slave Select) dan RST (Reset) untuk modul RFID MFRC522, membuat objek MFRC522 bernama rfid dengan pin SS dan RST yang telah ditentukan, dan menentukan UID yang diharapkan dari kartu RFID yang akan diakses. </p>
  
  ##### *Fungsi `setup()`*
<p align="justify"> memulai komunikasi serial dengan baud rate 9600, menginisialisasi bus SPI dan modul MFRC522. selanjutnya menampilkan pesan di Serial Monitor untuk menunjukkan bahwa pembaca RFID siap digunakan dengan perintah "Tap RFID/NFC Tag on reader". </p>
  
  ##### *Fungsi Loop*
<p align="justify"> Memeriksa apakah ada kartu RFID yang baru dihadirkan (`PICC_IsNewCardPresent`). Jika kartu baru hadir, membaca NUID kartu (`PICC_ReadCardSerial`). Untuk mengatur tipe kartu RFID dan memeriksa apakah UID kartu sesuai dengan UID yang ditentukan (`keyTagUID`). Menampilkan pesan "Access is granted" jika UID sesuai; sebaliknya, menampilkan pesan "Access denied" berserta UID kartu jika tidak sesuai. Menghentikan aktivitas kartu RFID (`PICC_HaltA`) dan menghentikan enkripsi pada PCD (Proximity Coupling Device). Keluaran program memberikan akses atau penolakan berdasarkan UID kartu RFID yang dihadirkan di dekat pembaca. Pesan-pesan status dan informasi UID ditampilkan di Serial Monitor untuk pemantauan dan debugging. Dalam program ini, akses diberikan jika UID kartu RFID sesuai dengan nilai yang ditentukan (`keyTagUID`).
   
   ##### Langkah 5 (Program agar Tag RFID yang terbaca sebelumya dapat digunakan untuk hak akses. Apabila Tag RFID didekatkan pada Reader, maka LED Hijau akan menyala, servo akan bergerak ke kanan (lalu kembali ke posisi semula setelah 3 detik) dan di Serial Monitor akan tertampil pesan “Akses Diterima, Silahkan Masuk”. Apabila Tag RFID tidak dikenali, maka LED Merah akan menyala, servo tidak bergerak dan di Serial Monitor akan tertampil pesan “Akses Ditolak”. Gunakan Tag RFID lain untuk mencoba)
Kode program dapat dilihat<a href="https://github.com/sekarnaa/sistem-embedded-new/blob/b631a1d1771e8c665e9b0ecce02f5d56ee25b76b/Laporan%202/C5.ino"> di sini</a>
   <img width="727" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/274036de-9b07-4be9-91d8-1e15f8128377">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/21cf1671-6df7-4c22-af76-5199d439b8c0


   ##### *Fungsi `setup()`*
  - Serial Communication: Membuka koneksi serial dengan kecepatan 115200 untuk debug.
  - DHT Sensor Initialization: Menginisialisasi sensor DHT11 pada pin digital 4.
  - Wi-Fi Connection: Menghubungkan ESP32 ke jaringan Wi-Fi yang telah ditentukan (ssid dan password).
  - Server Initialization: Membuat objek AsyncWebServer yang akan berjalan di port 80.
  - Routing: Menetapkan handler untuk tiga endpoint utama ("/", "/temperature", "/humidity").
  - Server Start: Memulai server.
  ##### *Fungsi readDHTTemperature*
<p align="justify"> Membaca suhu dari sensor DHT dan mengembalikan nilai suhu dalam format String. Jika pembacaan gagal, mengembalikan string "--". </p>

  ##### *Fungsi readDHTHumidity*
<p align="justify"> Membaca kelembaban dari sensor DHT dan mengembalikan3 nilai kelembaban dalam format String. Jika pembacaan gagal, mengembalikan string "--".</p>

  ##### *Fungsi index_html*
<p align="justify">Digunakan oleh server untuk menampilkan nilai suhu dan kelembaban. Terdapat placeholder (%TEMPERATURE% dan %HUMIDITY%) yang akan digantikan oleh nilai aktual saat halaman dimuat.</p>
  
  ##### *Fungsi processor*
<p align="justify">Fungsi yang digunakan oleh server untuk menggantikan placeholder dalam template HTML dengan nilai aktual dari sensor. Menggunakan fungsi readDHTTemperature dan readDHTHumidity untuk mendapatkan nilai aktual.</p>
