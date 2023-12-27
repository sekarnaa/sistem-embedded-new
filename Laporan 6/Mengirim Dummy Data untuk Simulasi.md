# Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware

### a. Langkah Kerja
1. Buka browser Google Chrome yang terinstall pada Windows.
2. Install ekstensi MQTTbox untuk Google Chrome.
3. Setelah itu, buka MQTTbox, klik Create Clients. Setelah itu, konfigurasikan
MQTTbox seperti Gambar 6.9. Sesuiakan IP Address Host dengan IP
Address MQTT Server pada VM Ubuntu. Untuk mengetahui alamat IP, pada
Terminal, ketikkan perintah ifconfig.

    ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/7106fe3e-aad8-474b-bd78-fec517d3e56c)

4. Setelah itu, klik Save. Kemudian konfigurasikan topic, QoS, Payload Type,
dan Payload seperti Gambar.

   ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/98f03e78-f8ec-4ef6-a2e6-d2f9428d2110)

6. Kemudian, pada terminal Ubuntu, ketikkan perintah sudo ufw allow 1883
untuk membuka port 1883 agar tidak di-block Firewall.
7. Untuk mencoba publish/mengirim data, klik tombol Publish. Sebelumnya klik
tombol Subscribe untuk mengetahui data yang dikirim dapat diterima kembali
oleh Clients.
8. Dokumentasikan hasilnya.
9. Kembangkan flow program yang sudah dibuat agar dapat menerima data
berupa String, Bolean dan Number. Kemudian tampilkan data tersebut secara
terpisah pada masing-masing log.

### b. Hasil dan Pembahasan
![Hasil Mengirim Dummy Data](https://github.com/raolaay/SistemEmbedded/assets/145360333/8b540ca3-c3ea-4799-85a5-06bc2ac69a9a)

<p align="justify"> Gambar di atas menunjukkan hasil pengiriman dummy data. Prinsip kerjanya sama seperti sebelumnya yang dilakukan menggunakan node red dimana
ada publisher dan ada subscriber. Dengan berlangganan di topic yang sama maka subscriber akan mengambil data dari publisher dan menampilkannya
sebagai output. Untuk pengembangan yang diminta itu kita membuat 3 publisher dan 3 subscriber dengan 3 topik yang berbeda pula untuk membedakan data dan
hasil yang ditampilkan akan menjadi seperti pada gambar di bawah.</p>

![Hasil Mengirim Dummy Data 3 Publisher](https://github.com/raolaay/SistemEmbedded/assets/145360333/5100328d-eab8-430c-a819-181c995e81d4)
