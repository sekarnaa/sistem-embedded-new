# A. Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut


![rangkaian 32](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/1f9893a8-c25d-45ff-bc57-59501992eaf2)


### b. Source Code
Kode program dapat dilihat <a href="4a_setting_ssid_pasword_melalui_web_server/4a_setting_ssid_pasword_melalui_web_server.ino">di sini</a>

### c. Hasil


![hasil-1-1](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/3dd7d0aa-3b87-4edb-b1a7-ddec129f0f6f)

ESP menampilkan daftar SSID yang tersedia

![hasil-1-2](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/0b5edba3-b49e-4432-9578-d4ae55e9d363)

mengisikan SSID dan password pada browser

![hasil-1-3](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/8c7ac88b-92c1-428b-a791-26c07e0f7ec0)


Berhasil terhubung ke jaringan WiFi

ESP akan menampilkan daftar SSID WiFi yang dapat diakses. Setelah itu, masukkan IP Address yang ditampilkan di serial monitor ke browser, dan isi formulir yang tersedia dengan SSID dan Password yang sesuai. Hasil akhirnya adalah ESP akan terkoneksi ke jaringan WiFi tersebut, yang memiliki SSID "alfingay", dan menampilkan pesan "Berhasil Terhubung ke alfingay".

### d. Flowchart
![flow](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/b1b696a1-1ab3-4d45-b97c-5079ae79e458)
