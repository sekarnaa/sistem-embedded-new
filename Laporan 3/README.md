<h1 align="center">LAPORAN PRAKTIKUM SISTEM EMBEDDED</h1>
<h2 align="center"> TOPOLOGI JARINGAN LOKAL DAN WIFI</h2>
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

#### A.	ABSTRAK
Pada praktikum ini mempelajari tentang konsep topologi jaringan lokal yang memanfaatkan teknologi Wi-Fi sebagai alat komunikasi yang esensial. Dengan contoh bagaimana protokol jaringan lokal yang berbasis Wi-Fi beroperasi, dengan mendukung pengembangan Wireless Sensor Network (WSN) dan Internet of Things (IoT). Praktikum ini juga menjelaskan berbagai situasi lapangan dimana topologi jaringan Wi-Fi digunakan dalam konteks WSN dan IoT. Kesimpulannya, praktikum ini dapat menjadi dasar untuk menghadapi tantangan dunia nyata dalam mengelola topologi jaringan Wi-Fi untuk aplikasi WSN dan IoT yang beragam.

#### B.	ALAT DAN BAHAN
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT 11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)

##### Metode
1. ESP32 Wi-Fi Modes dan Wifi-Scan:
Metode yang mungkin digunakan adalah pengaturan mode Wi-Fi pada ESP32, yang dapat mencakup mode AP (Access Point) dan mode Station. 
2. Menghubungkan ESP32 dengan Jaringan Wi-Fi:
Metode yang digunakan dapat mencakup pengaturan SSID (Service Set Identifier) dan password untuk menghubungkan ESP32 ke jaringan WiFi. Dapat menggunakan fungsi-fungsi khusus pada ESP32 untuk menghubungkan koneksi Wi-Fi.
3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi:
Untuk mengatasi situasi koneksi putus, metode yang digunakan dapat mengimplementasikan logika untuk mendeteksi kehilangan koneksi dan mencoba untuk menghubungkan kembali dengan jaringan WiFi yang telah ditentukan.
4. Mengganti Hostname ESP32:
Metode ini mengubah nama host (hostname) pada ESP32. Hal ini dapat dilakukan dengan menggunakan fungsi-fungsi khusus yang disediakan oleh ESP32 untuk mengonfigurasi dan mengganti nama host perangkat.
5. Mengirim Data Sensor ke Database:
Metode yang mungkin digunakan adalah penggunaan protokol komunikasi seperti HTTP atau MQTT untuk mengirim data sensor dari ESP32 ke database. Hal ini melibatkan implementasi koneksi ke jaringan WiFi dan penggunaan endpoint atau topik khusus untuk mentransfer data ke database.

#### C.	HASIL DAN PEMBAHASAN 
##### 1. ESP32 Wi-Fi Modes dan Wifi-Scan
   <img width="236" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/1fe021dd-68d1-4a07-96a5-1ec78a585634">
Program ini, ESP32 akan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Setelah berhasil terhubung, alamat MAC ESP32 akan dicetak ke monitor serial. Program ini dapat dijadikan dasar untuk menambahkan fungsionalitas pengiriman data atau menerima instruksi melalui jaringan Wi-Fi.

##### 2. Menghubungkan ESP32 dengan Jaringan Wi-Fi
   <img width="262" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/9d9f4f2d-0eff-4607-9bdf-0a2a0abee21f">
Program tersebut menghubungkan perangkat ke jaringan Wi-Fi dengan menggunakan SSID dan kata sandi yang telah ditentukan. Setelah inisialisasi, program mencetak nilai RSSI dari koneksi Wi-Fi saat ini ke dalam monitor serial. Program ini memiliki keluaran untuk pemantauan dan penanganan status koneksi Wi-Fi pada ESP32.

##### 3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
   <img width="264" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/657ffdde-19fd-4957-b05d-39cdc1f8002c">
Program tersebut memiliki tujuan untuk menghubungkan perangkat ke jaringan Wi-Fi dan secara periodik mencetak nilai RSSI (Received Signal Strength Indicator) ke monitor serial. Pada bagian setup, program membuka koneksi serial untuk keperluan debugging dan memanggil fungsi initWiFi() untuk menginisialisasi koneksi Wi-Fi. Fungsi initWiFi() mengatur mode Wi-Fi sebagai mode STATION (klien) dan mencoba untuk terhubung ke jaringan Wi-Fi yang telah ditentukan, selanjutnya mencetak pesan status koneksi dan alamat IP lokal ESP32 ke monitor serial. Selanjutnya, nilai RSSI dari koneksi Wi-Fi saat ini dicetak di dalam fungsi setup setelah inisialisasi koneksi. Dalam fungsi loop, program secara terus-menerus memeriksa status koneksi Wi-Fi dan mencoba merekoneksi jika koneksi terputus. Proses ini dilakukan secara periodik dengan interval waktu sekitar 30 detik, seperti yang ditentukan oleh variabel interval. 

##### 4. Mengganti Hostname ESP32
Program diatas ESP32 yang mengatur koneksi Wi-Fi dan hostname perangkat. Dalam setup, program membuka koneksi serial, menginisialisasi koneksi Wi-Fi sebagai mode STATION, dan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Selanjutnya, program mencetak nilai RSSI dan hostname baru ke dalam monitor serial setelah berhasil terhubung. Meskipun terdapat upaya untuk mengonfigurasi alamat IP secara manual menggunakan `WiFi.config()`, tampaknya konfigurasi tersebut tidak efektif dan perangkat tetap menggunakan DHCP. 

##### 5. Mengirim Data Sensor ke Database
Program tersebut membuat server web sederhana untuk menampilkan data suhu dan kelembaban dari sensor DHT11. Dengan menggunakan WiFi dan AsyncWebServer library, ESP32 terhubung ke jaringan Wi-Fi, membaca data dari sensor DHT11, dan menyajikannya dalam sebuah halaman web. Pada bagian setup menginisialisasi sensor DHT11, koneksi ke jaringan Wi-Fi, dan konfigurasi server web. Halaman web yang ditampilkan menggunakan HTML dan CSS dengan elemen-elemen presentasi yang estetis, dan JavaScript digunakan untuk mengambil dan memperbarui data suhu dan kelembaban secara periodik tanpa memuat ulang seluruh halaman.

#### D.	KESIMPULAN
Pada praktikum yang telah dilakukan dapat disimpulkan:
1. 
