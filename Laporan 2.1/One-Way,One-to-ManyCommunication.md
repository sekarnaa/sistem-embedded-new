## C. ONE-WAY, ONE-TO-MANY COMMUNICATION
## 1. Mengirim Pesan yang Sama Ke Beberapa Board ESP32

### a. Rangkaian

![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/dd0c1f6d-1e55-430e-aebd-a127006455b5)

### b. Source Code
Kode program sebagai sender dapat dilihat <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202.1/C.%20One-Way%2C%20One-to-Many%20Communication/Sender_4ESP_%20Data%20Sama.ino">di sini.</a>

### c. Hasil dan Pembahasan
<p align="justify"> Pada saat mengirim pesan yang sama ke beberapa board ESP32, kelompok kami berperan sebagai
master/sender (pengirim). Di sini kami mengirimkan data yang sama ke beberapa slave/receiver (penerima) dengan memasukkan
MAC address masing-masing penerima ke dalam program. Jika data berhasil terkirim maka pada serial monitor akan tampil seperti
pada video di bawah.</p>


https://github.com/raolaay/SistemEmbedded/assets/145360333/9c380021-0fee-428d-99e5-4bc8c4bb1b5b 





## 2. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32

### a. Rangkaian
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/dd0c1f6d-1e55-430e-aebd-a127006455b5)

### b. Source Code
Kode program sebagai receiver dapat dilihat <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202.1/C.%20One-Way%2C%20One-to-Many%20Communication/Receiver_4ESP_3_Data_Berbeda.ino">di sini.</a>

### c. Hasil dan Pembahasan
<p align="justify">Kali ini kelompok kami berperan sebagai slave atau receiver yang akan menerima data dari master. Data yang dikirimkan
berbeda ke masing-masing board. Dari sender ada 3 data yang berbeda. Data yang kami terima di sini adalah data1, yang kemudian ditampilkan
pada serial monitor seperti pada video di bawah.</p>


https://github.com/raolaay/SistemEmbedded/assets/145360333/c4ca525c-8ce3-417a-89d0-85ee6d61e0cd
