## B. MENGAKSES SENSOR DHT 11 (SINGLE WIRE / BUS)
### RANGKAIAN
<img width="219" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/030a6da7-7109-4225-aaa3-176b64b66344">

### HASIL DAN PEMBAHASAN
##### Langkah 3 (Buatlah program untuk mengakses sensor DHT11)
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/55210fd5bbbe949ac6cd94de6869bb9441b3c0f9/Laporan%202/B3.ino">di sini</a>
  
  <img width="245" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/c77a2030-4247-4aa2-8a7d-88fde86bcbfe">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4539642d-044a-4194-9697-227ce1295818


  ##### *Fungsi deklarasi dan pengaturan awal*
<p align="justify"> Langkah awal mendeskripsikan pin untuk sensor DHT (`DHTPIN`), tipe sensor DHT (`DHTTYPE`), pin LED (`LED_PIN`), dan pin buzzer (`BUZZER_PIN`). Kemudian membuat objek DHT bernama `dht` menggunakan pin DHT dan tipe DHT yang sudah didekripsikan diawal tadi, sehingga dapat inisialisasi pin sebagai output dan memulai komunikasi serial.</p>
  
  ##### *Fungsi `loop()`*
<p align="justify">Dapat dilihat nilai suhu disimpan dalam variabel temperature. Setelah itu, program memeriksa apakah nilai suhu tersebut valid (bukan NaN). Jika nilainya valid maka program akan lanjut menyesuaikan keluaran berdasarkan nilai suhu tersebut. Jika suhu lebih dari atau sama dengan 30 derajat Celsius, keluaran LEDnya nyala dan menghasilkan bunyi dari buzzer dengan frekuensi 1000 Hz selama 100 milidetik, kemudian mematikan bunyi selama 100 milidetik. Sebaliknya, jika suhu kurang dari 30 derajat Celsius, LED akan berkedip sebanyak lima kali dengan interval 500 milidetik. Program ini memberikan tanggapan visual dan suara yang bergantung pada kondisi suhu sekitar, memberikan informasi yang berguna melalui LED dan buzzer.</p>
  
  ##### Langkah 4 (Buatlah program agar ketika suhu rungan mencapai 30 derajat celcius, maka ESP32 akan menyalakan LED Merah dan buzzer secara beep (blink). Apabila suhu dibawah 30 derajat, ESP32 akan mematikan buzzer dan menyalakan LED berbentuk running LED)
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/43e124dbe669d46d4c28fa0b99c1160dfd99221c/Laporan%202/B4.ino">di sini</a>
  
  <img width="493" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/bf40ffeb-c11b-4023-aaae-eee1b98db593">



https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/ab090194-36e9-45ff-ba48-cb5ee46044bf


  ##### *Fungsi deklarasi library dan pin*
<p align="justify">Mengatur kode dengan mendeklarasikan dua library, yaitu SPI dan MFRC522 yang digunakan untuk berkomunikasi dengan modul RFID MFRC522. Selain itu Pin SS_PIN dan RST_PIN diatur untuk komunikasi SPI antara ESP32 dan modul RFID.</p>

  ##### *Fungsi deklarasi library dan pin `setup()`*
<p align="justify">Komunikasi serial dengan baud rate 9600 memungkinkan pertukaran informasi dengan komputer melalui Serial Monitor. Langkah selanjutnya menginisialisasi komunikasi SPI melalui perintah `SPI.begin()`, yang diperlukan untuk berkomunikasi dengan modul RFID MFRC522. Setelah itu, modul RFID MFRC522 diinisialisasi menggunakan `rfid.PCD_Init()`. Inisialisasi ini melibatkan konfigurasi awal yang diperlukan agar modul RFID dapat berfungsi dengan benar. Terakhir, sebuah pesan informatif ditampilkan di Serial Monitor, memberi tahu pengguna untuk menyentuhkan tag RFID atau NFC ke pembaca. </p>

  ##### *Fungsi Loop*
<p align="justify">Code untuk mengecek apakah ada tag baru yang ditempatkan di depan pembaca menggunakan `rfid.PICC_IsNewCardPresent()`. Jika tag baru telah terdeteksi, maka membaca serial number (NUID) dari tag menggunakan `rfid.PICC_ReadCardSerial()`. Berikutnya untuk memeriksa tipe tag menggunakan `rfid.PICC_GetType(rfid.uid.sak)`. Code `keyTagUID` untuk membandingkan UID tag dengan UID yang ditentukan dalam array. Jika UID tag sesuai dengan `keyTagUID`, program menampilkan pesan "Access is granted". Sebaliknya UID tidak sesuai program akan menampilkan pesan "Access denied for user with UID" dan menampilkan UID tag yang tidak dikenal. Proses berlangsung dalam loop, terus memeriksa keberadaan tag RFID dan memberikan respons sesuai dengan UID tag yang dibaca. </p>
