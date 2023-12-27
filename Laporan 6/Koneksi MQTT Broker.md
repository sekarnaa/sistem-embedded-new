# Koneksi MQTT Broker

### a. Langkah Kerja
  1. Buka Node-Red
  2. Kemudian buatlah tab baru untuk memulai membuat flow pemrograman
backend-server menggunakan protokol MQTT.
  4. Buatlah flow program seperti pada Gambar.

     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/93a092ef-e544-4023-bd55-a3ee2b0a8e3c)

  6. Konfigurasikan Temperature Node seperti Gambar di bawah ini.

     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/ce54b3ab-b148-427a-8462-3ebda99617ad)

  8. Kemudian konfigurasikan Pub/Sub Node seperti pada Gambar. Klik pada
tanda lingkaran merah untuk membuat koneksi dengan broker MQTT.

![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/37cd81f2-6f1f-4dfe-8c89-a43057ca842b)
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/a4f87e04-08ff-4f4d-9036-80cad0c810f6)

  10. Setelah itu, konfigurasikan Broker Node seperti pada Gambar. Sesuaikan
dengan broker server sebelumnya, agar tercipta koneksi. Perhatikan juga topic
yang digunakan, agar pesan dapat dikirim pada address yang benar.

![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/4555004d-81d5-41b7-b98b-36daa10487a3)

12. Setelah semua telah dikonfigurasi, deploy flow dan dokumentasikan hasil
outputnya.

### b. Hasil dan Pembahasan
<p align="justify"> Di sini kita menentukan konfigurasi MQTT broker dengan menambahkan node broker MQTT dan mengonfigurasinya dengan alamat dan port broker yang digunakan. Setelah dikonfigurasi, node ini bertindak sebagai pintu masuk ke broker MQTT. Untuk mengirim pesan ke perangkat lain atau sistem yang berlangganan, kita dapat menggunakan node yang berfungsi sebagai publisher MQTT. Node ini dapat dikonfigurasi dengan topik (topic) dan pesan yang akan dikirim. Sementara untuk menerima pesan, kita dapat menggunakan node yang berfungsi sebagai subscriber MQTT yang juga diatur untuk berlangganan pada topik tertentu dan mengeksekusi tindakan tertentu ketika pesan diterima.</p>

![Hasil Koneksi MQTT Broker](https://github.com/raolaay/SistemEmbedded/assets/145360333/5a87d338-e311-47e8-9416-db2dadc83913)

<p align="justify"> Flowchart pada praktikum ini dimulai dengan input temperatur, yang kemudian dikirimkan ke broker MQTT melalui node publisher. Broker berperan sebagai perantara untuk menyampaikan pesan temperatur ke node subscriber yang berlangganan. Node subscriber menerima pesan dan melakukan pemrosesan untuk menampilkan pesannya. </p>
