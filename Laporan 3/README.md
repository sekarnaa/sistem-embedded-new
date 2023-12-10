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
   <img width="214" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/d8bc2769-8dea-477c-9c24-f75fdbe048ee">
Program ini, ESP32 akan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Setelah berhasil terhubung, alamat MAC ESP32 akan dicetak ke monitor serial maka jaringan WiFi beserta kekuatan sinyal yang didapat. Jika tidak ada jaringan maka akan tertulis "No Networks Found". Scanning akan diulang setiap 5 detik karena terdapat delay(5000) dan lebih baik tidak dilakukan terlalu cepat (spam).

##### 2. Menghubungkan ESP32 dengan Jaringan Wi-Fi
<img width="133" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/245cd0ab-e1aa-46b0-928b-e8f8bcf03265">
Program tersebut menghubungkan perangkat ke jaringan Wi-Fi dengan menggunakan SSID dan kata sandi yang telah ditentukan. Setelah inisialisasi, program mencetak nilai RSSI dari koneksi Wi-Fi saat ini ke dalam monitor serial. Program ini memiliki keluaran untuk pemantauan dan penanganan status koneksi Wi-Fi pada ESP32.

##### 3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
<img width="283" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/cd2a365e-740e-4bfc-a139-e2fe83b76d7f">
Program tersebut memiliki tujuan untuk menghubungkan perangkat ke jaringan Wi-Fi dan secara periodik mencetak nilai RSSI (Received Signal Strength Indicator) ke monitor serial. Pada bagian setup, program membuka koneksi serial untuk keperluan debugging dan memanggil fungsi initWiFi() untuk menginisialisasi koneksi Wi-Fi. Fungsi initWiFi() mengatur mode Wi-Fi sebagai mode STATION (klien) dan mencoba untuk terhubung ke jaringan Wi-Fi yang telah ditentukan, selanjutnya mencetak pesan status koneksi dan alamat IP lokal ESP32 ke monitor serial. Selanjutnya, nilai RSSI dari koneksi Wi-Fi saat ini dicetak di dalam fungsi setup setelah inisialisasi koneksi. Dalam fungsi loop, program secara terus-menerus memeriksa status koneksi Wi-Fi dan mencoba merekoneksi jika koneksi terputus. Proses ini dilakukan secara periodik dengan interval waktu sekitar 30 detik, seperti yang ditentukan oleh variabel interval. 

##### 4. Mengganti Hostname ESP32
<img width="215" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/9d2d530e-c145-4212-969a-14d9bc247675">
Program diatas ESP32 yang mengatur koneksi Wi-Fi dan hostname perangkat. Dalam setup, program membuka koneksi serial, menginisialisasi koneksi Wi-Fi sebagai mode STATION, dan mencoba terhubung ke jaringan Wi-Fi yang ditentukan. Selanjutnya, program mencetak nilai RSSI dan hostname baru ke dalam monitor serial setelah berhasil terhubung. Meskipun terdapat upaya untuk mengonfigurasi alamat IP secara manual menggunakan `WiFi.config()`, tampaknya konfigurasi tersebut tidak efektif dan perangkat tetap menggunakan DHCP. 

##### 5. Mengirim Data Sensor ke Database
<img width="215" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/ac83b41e-5e8a-4780-a344-6325806746c9">
Program tersebut membuat server web sederhana untuk menampilkan data suhu dan kelembaban dari sensor DHT11. Dengan menggunakan WiFi dan AsyncWebServer library, ESP32 terhubung ke jaringan Wi-Fi, membaca data dari sensor DHT11, dan menyajikannya dalam sebuah halaman web. Pada bagian setup menginisialisasi sensor DHT11, koneksi ke jaringan Wi-Fi, dan konfigurasi server web. Halaman web yang ditampilkan menggunakan HTML dan CSS dengan elemen-elemen presentasi yang estetis, dan JavaScript digunakan untuk mengambil dan memperbarui data suhu dan kelembaban secara periodik tanpa memuat ulang seluruh halaman.

#### D.	KESIMPULAN
Pada praktikum yang telah dilakukan dapat disimpulkan:
1. 
