# D. Akuisisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT.

## 1. Melalui Dashboard Node_red

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut


![note-red](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/c360f359-8631-4102-b926-8d0b5c842763)

Kode program json `Multi-Protocol IoT` dapat dilihat <a href="../program.json">di sini</a>

### b. Source Code
Kode program dapat dilihat <a href="4d_led.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, masih sama seperti sebelumnya menggunakan protokol MQTT. Yang menjadi tambahan disini adalah pengaturan nyala LED pada dashboard Node-Red.
LED dihubungkan pada pin D2 yang kemudian dapat diatur nyala atau padam dengan mengubah tombol switch pada dashboard Node-Red.

- Serial Monitor
 

![serial 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/ead3acfd-6637-4d54-a65d-d6464679bc6a)


- Debug
  
  ![debug 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/6e456b0a-f7a4-41b6-bf0f-f187581ba30a)

- Dashboard
  
![dashboard 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/e9ee9cf7-d517-410b-827c-a9a545434553)

- Hasil Percobaan

https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/44e1ae7c-1da2-4bed-b440-5f00bfa1c853

### d. Flowchart





![flow 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/5cc9985c-9065-467c-9732-93da2546af80)

## 2. Melalui Dashboard Adafruit.io

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![note-red](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/c360f359-8631-4102-b926-8d0b5c842763)

Kode program json `Multi-Protocol IoT` dapat dilihat <a href="../program.json">di sini</a>

### b. Source Code
Kode program dapat dilihat <a href="4d_adafruit.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada bagian ini yang membedakan adalah pengaturan nyala LED diatur melalui dashboard Adafruit. Masuk ke website io.adafruit.com dan buat akun terlebih dahulu.
Kemudian, buat dashboard widget seperti panduan jobsheet. Hal yang penting disini adalah `IO USERNAME` dan `IO KEY` yang harus kita definisikan pada program Arduino.
IO username adalah nama pengguna (username) yang digunakan untuk login, sedangkan IO key (kunci IO) adalah kunci API (API key) yang digunakan untuk otentikasi dan mengakses layanan Adafruit IO.
IO KEY dapat dilihat pada dasbor Adafruit yang bergambar kunci berwarna kuning. Jangan lupa untuk memastikan feed (umpan) telah sesuai. Jika telah selesai dikonfigurasi, hasil akan terlihat seperti berikut.

- Serial Monitor
  
    <img width="506" alt="aio-serial-1" src="https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/2175ad9b-7f19-403e-8f1f-249ad0d2cf2c">
  
 ![aio-serial-2 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/ec1ae3ed-d377-4d60-b3ec-dd340622263d)

- Hasil Percobaan
  
  before
  
<img width="272" alt="aio before " src="https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/db7abbc0-a735-4427-82aa-c8ec0615792e">

  after

 <img width="285" alt="aio after " src="https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/8bb0605c-9ce1-4168-b3e5-b9c07e3a4d70">


### d. Flowchart

![aio-flow 4d](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/573d7e46-667d-4a63-b33c-ca9165efb32a)
