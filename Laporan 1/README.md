<h1 align="center">LAPORAN PRAKTIKUM SISTEM EMBEDDED</h1>
<h2 align="center"> DASAR PEMROGRAMAN ESP32 UNTUK PEMROSESAN DATA INPUT/OUTPUT ANALOG DAN DIGITAL </h2>
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

#### A. ABSTRAK
Pada praktikum ini membahas dasar-dasar pemrograman ESP32 untuk pemrosesan data input/output analog dan digital. Selain itu menjelaskan konsep dasar pemrograman ESP32, termasuk pengenalan perangkat keras, pengaturan awal, dan penggunaan Integrated Development Environment (IDE) Arduino untuk mengembangkan kode ESP32. Dalam praktikum kali ini juga akan melakukan percobaan teknik pembacaan data analog menggunakan pin ADC (Analog-to-Digital Converter) ESP32 dan pengendalian perangkat digital dengan menggunakan pin GPIO (General-Purpose Input/Output).

#### B. ALAT DAN BAHAN (Metode / skematik)
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) Sensor Capacitive Soil Moisture
6) LED (5) dan Push Button (3)
7) Multimeter
8) Resistor 330,1K, 10K Ohm (@ 3)
   
#### C. HASIL DAN PEMBAHASAN (fungsi tiap code/flow chart)
1. m
2. Mengakses GPIO dan PWM ESP32
   ##### GPIO Langkah 3
   <img width="341" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/88dfdefd-4659-4e73-b8c4-ed8f077f7ebd">

   ##### GPIO Langkah 4
   <img width="210" alt="Screenshot 2023-12-10 202541" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4d8a1cbe-0603-4018-bc58-deb9cb75b185">

   ##### GPIO Langkah 5
   ##### PWM Langkah 1-3
   <img width="360" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/9fc63206-9879-4a75-a5c2-e700251cbec3">

   ##### PWM Langkah 4-5
   <img width="360" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4bd65938-6e60-4b2e-902e-dc71bb75d859">

4. ADC dan DAC
   ##### Langkah 1-3
   <img width="250" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/1c50627f-2740-4a4c-90f3-5be8572c2ed8">
  - Program tersebut membaca nilai potensiometer yang terhubung ke pin GPIO 34 (Analog ADC1_CH6) pada mikrokontroler. Hasil keluaran akan ditampilkan pada serial monitor sehingga dapat melihat perubahan nilai yang terjadi.
  ##### *Fungsi deklarasi variabel*
  - `const int potPin = 34;`: Mendeklarasikan konstanta `potPin` dengan nilai 34 dimana potensiometer terhubung ke pin GPIO 34.
  - `int potValue = 0;`: Mendeklarasikan variabel `potValue` sebagai penyimpan nilai potensiometer, yang nilai awalnya diatur dari 0.
  ##### *Fungsi Setup*
  - `void setup() {...}`: fungsi setup yang dieksekusi sekali saat program pertama kali dijalankan.
  - `Serial.begin(115200);`: menginisialisasi komunikasi serial dengan baud rate 115200.
  - `delay(1000);`: .enunda eksekusi program selama 1000 milidetik (1 detik) untuk memberikan waktu inisialisasi.
  ##### *Fungsi Loop*
  - `potValue = analogRead(potPin);`: Membaca nilai analog dari pin potensiometer dan menyimpannya ke dalam variabel `potValue`.
  - `Serial.println(potValue);`: Menampilkan nilai potensiometer ke Serial Monitor melalui komunikasi serial.
  - `delay(500);`: Menunda eksekusi program selama 500 milidetik (0.5 detik) sebelum membaca nilai potensiometer lagi.

   ##### Langkah 4-5
   <img width="263" alt="Screenshot 2023-12-10 203924" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/7e919806-b2b4-414d-9c8c-2025ac036247">
   
   - Program tersebut salah satu implementasi kontrol LED berdasarkan input dari sensor sentuh pada Arduino. Pada bagian deklarasi variabel, pin yang terhubung ke sensor sentuh dan LED ditetapkan sebagai konstanta. Untuk fungsi setup dijalankan sekali saat program dimulai, mengatur pin LED sebagai output, pin sensor sentuh sebagai input, dan menginisialisasi LED dalam kondisi mati. Komunikasi serial juga diinisialisasi untuk memantau status sensor dan LED. Kemudian fungsi loop yaitu berjalan terus-menerus, membaca nilai digital dari pin sensor sentuh. Jika sensor disentuh (nilai HIGH), program akan menyalakan LED dan mengirimkan pesan ke Serial Monitor. Sebaliknya, jika sensor tidak disentuh (nilai LOW), LED dimatikan, dan pesan yang sesuai dikirimkan. `delay(100);`berarti penundaan waktu agar tidak terlalu cepat membaca sensor dan mengurangi kemungkinan pembacaan yang tidak stabil.

6. Simulasi Pemrosesan Data Menggunakan Regresi Linier
   ##### Langkah

#### D. KESIMPULAN


