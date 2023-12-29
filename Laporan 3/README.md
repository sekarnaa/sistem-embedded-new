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
<p align="justify"> Pada praktikum ini mempelajari tentang konsep topologi jaringan lokal yang memanfaatkan teknologi Wi-Fi sebagai alat komunikasi yang esensial. Dengan contoh bagaimana protokol jaringan lokal yang berbasis Wi-Fi beroperasi, dengan mendukung pengembangan Wireless Sensor Network (WSN) dan Internet of Things (IoT). Praktikum ini juga menjelaskan berbagai situasi lapangan dimana topologi jaringan Wi-Fi digunakan dalam konteks WSN dan IoT. Kesimpulannya, praktikum ini dapat menjadi dasar untuk menghadapi tantangan dunia nyata dalam mengelola topologi jaringan Wi-Fi untuk aplikasi WSN dan IoT yang beragam. </p>

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
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/d3a72da866214ee8797961b847e888060c8b6bb6/Laporan%203/A_ESP32%20Wi-Fi%20Modes%20dan%20Wifi-Scan.ino">di sini.</a>

<img width="214" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/d8bc2769-8dea-477c-9c24-f75fdbe048ee">
   

https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/2a08f022-9aa1-4335-804e-bc622cea5b19


<p align="justify"> Program ini, ESP32 akan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Setelah berhasil terhubung, alamat MAC ESP32 akan dicetak ke monitor serial maka jaringan WiFi beserta kekuatan sinyal yang didapat. Jika tidak ada jaringan maka akan tertulis "No Networks Found". Scanning akan diulang setiap 5 detik karena terdapat delay(5000) dan lebih baik tidak dilakukan terlalu cepat (spam).</p>

##### 2. Menghubungkan ESP32 dengan Jaringan Wi-Fi
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/794b83b50b24ae211e328535885bad4a8ffa6175/Laporan%203/B_Menghubungkan_ESP32_dengan_Jaringan_Wi-Fi.ino">di sini.</a>

<img width="133" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/245cd0ab-e1aa-46b0-928b-e8f8bcf03265">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/34dcf626-5e8c-4d69-9164-0757b7eaad09


<p align="justify"> Program tersebut menghubungkan perangkat ke jaringan Wi-Fi dengan menggunakan SSID dan kata sandi yang telah ditentukan. Setelah inisialisasi, program mencetak nilai RSSI dari koneksi Wi-Fi saat ini ke dalam monitor serial. Program ini memiliki keluaran untuk pemantauan dan penanganan status koneksi Wi-Fi pada ESP32.</p>

##### 3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/794b83b50b24ae211e328535885bad4a8ffa6175/Laporan%203/C_Reconnect_dengan_Jaringan_WiFi.ino">di sini.</a>

<img width="283" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/cd2a365e-740e-4bfc-a139-e2fe83b76d7f">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4d0213c8-fcad-4bc3-8ac4-02e362c6b77d


<p align="justify"> Program tersebut memiliki tujuan untuk menghubungkan perangkat ke jaringan Wi-Fi dan secara periodik mencetak nilai RSSI (Received Signal Strength Indicator) ke monitor serial. Pada bagian setup, program membuka koneksi serial untuk keperluan debugging dan memanggil fungsi initWiFi() untuk menginisialisasi koneksi Wi-Fi. Fungsi initWiFi() mengatur mode Wi-Fi sebagai mode STATION (klien) dan mencoba untuk terhubung ke jaringan Wi-Fi yang telah ditentukan, selanjutnya mencetak pesan status koneksi dan alamat IP lokal ESP32 ke monitor serial. Selanjutnya, nilai RSSI dari koneksi Wi-Fi saat ini dicetak di dalam fungsi setup setelah inisialisasi koneksi. Dalam fungsi loop, program secara terus-menerus memeriksa status koneksi Wi-Fi dan mencoba merekoneksi jika koneksi terputus. Proses ini dilakukan secara periodik dengan interval waktu sekitar 30 detik, seperti yang ditentukan oleh variabel interval. </p>

##### 4. Mengganti Hostname ESP32
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/794b83b50b24ae211e328535885bad4a8ffa6175/Laporan%203/D_Mengganti_Hostname.ino">di sini.</a>

<img width="215" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/9d2d530e-c145-4212-969a-14d9bc247675">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/a5154a5b-e3b8-445e-a541-f3dc15be3f2d


<p align="justify"> Program diatas ESP32 yang mengatur koneksi Wi-Fi dan hostname perangkat. Dalam setup, program membuka koneksi serial, menginisialisasi koneksi Wi-Fi sebagai mode STATION, dan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Selanjutnya, program mencetak nilai RSSI dan hostname baru ke dalam monitor serial setelah berhasil terhubung. Meskipun terdapat upaya untuk mengonfigurasi alamat IP secara manual menggunakan `WiFi.config()`, tampaknya konfigurasi tersebut tidak efektif dan perangkat tetap menggunakan DHCP.</p>

##### 5. Mengirim Data Sensor ke Database
Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/b575f0310e5d5a0feafff83653de1f26dbc3fc06/Laporan%203/E_Mengetahui_IP_Address.ino">di sini.</a>
##### Rangkaian dan Flowchart
<img width="290" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/dc3507fb-1c5b-45f1-8f4e-8c828021feb7">

<img width="480" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/2f89b0e1-b003-4d54-b9a8-b6ddc8a2bdfb">
<p align="justify"> Program tersebut membuat server web sederhana untuk menampilkan data suhu dan kelembaban dari sensor DHT11. Dengan menggunakan WiFi dan AsyncWebServer library, ESP32 terhubung ke jaringan Wi-Fi, membaca data dari sensor DHT11, dan menyajikannya dalam sebuah halaman web. Pada bagian setup menginisialisasi sensor DHT11, koneksi ke jaringan Wi-Fi, dan konfigurasi server web. Halaman web yang ditampilkan menggunakan HTML dan CSS dengan elemen-elemen presentasi yang estetis, dan JavaScript digunakan untuk mengambil dan memperbarui data suhu dan kelembaban secara periodik tanpa memuat ulang seluruh halaman. </p>

#### D.	KESIMPULAN
<p align="justify"> Pada praktikum yang telah dilakukan dapat disimpulkan bahwa, program ESP32 pada praktikum ini bertujuan untuk menghubungkan perangkat ke jaringan Wi-Fi, menyediakan informasi status koneksi, dan menampilkan data suhu dan kelembaban dari sensor DHT11 melalui antarmuka web sederhana. Meskipun ada upaya untuk mengatur alamat IP secara manual yang tampaknya tidak berhasil, program ini efektif dalam mengelola koneksi Wi-Fi dan menyediakan pemantauan melalui monitor serial. Selain itu, server web sederhana yang dibuat dapat memberikan akses yang mudah untuk melihat data sensor melalui halaman web. </p>
