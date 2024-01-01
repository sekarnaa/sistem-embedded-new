## E. TWO-WAY COMMUNICATION

### a. Rangkaian
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/60013cd1-5eab-4471-9055-f37f27b26cfd)
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/97c93354-3fea-4ef5-a312-e6017536da28)

### b. Source Code
1. Kode program untuk melakukan pengecekan pada sensor DHT 11 dapat dilihat <a href="">di sini.</a>
2. Kode program untuk melakukan komunikasi dua arah dapat dilihat <a href="">di sini.</a>

### c. Hasil dan Pembahasan
<p align="justify">Di sini kami terlebih dahulu melakukan pengecekan pada sensor DHT 11 untuk memastikan
sensor dapat berjalan dengan semestinya. Hasil pengukuran sensor kemudian akan tampil pada serial monitor
seperti gambar berikut.</p>

![E5_Hasil Upload Cek Suhu Masing-Masing](https://github.com/raolaay/SistemEmbedded/assets/145360333/5cc5ee58-238c-4f53-8036-9f494f8dd30c)

<p align="justify"> Kemudian setelah sensor dipastikan dapat berjalan dengan baik, kami mengunggah program untuk
bisa berkomunikasi dua arah dengan ESP32 milik kelompok lain. Di sini terjadi pertukaran data antara data kami dan data
dari kelompok lain yang terbaca oleh sensor. Tampilan output pada serial monitor akan menjadi seperti gambar di bawah.</p>

![E5_Hasil Connecting 2 ESP DHT 1](https://github.com/raolaay/SistemEmbedded/assets/145360333/0c74cfe2-78a1-4e6e-a5e3-307fe0574c30)
