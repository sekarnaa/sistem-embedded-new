## A. ESP32 CAPACITIVE TOUCH SENSOR
### RANGKAIAN
<img width="183" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/dcdc56e3-54c2-4f2f-99f5-4ad4ee63dbb4">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/40779a3a-81a9-4c65-9371-a318e1680f27


### HASIL DAN PEMBAHASAN
  ##### Langkah 4 (Menghubungkan kabel jumper Male-to-Female pada Pin D4 ESP32. Kemudian Sentuh ujung kabel jumper dan amati yang terjadi)
  <img width="253" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/6978b5bb-8099-432f-86d4-00cd91e41049">
<p align="justify"> Hasil keluaran dapat dilihat nilai pembacaan dari pin sentuh (touch) pada GPIO 4 tercetak ke dalam monitor serial setiap detiknya. Nilai tersebut mencerminkan seberapa kuat sinyal sentuhan yang dideteksi oleh sensor sentuh pada pin tersebut. Semakin tinggi nilai yang tercetak, semakin kuat sentuhan yang dideteksi. </p>
  
  ##### Langkah 6 (Buatlah program agar LED menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh)
  Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/ad3d8c9122b234fb060974c842e3ae868e244bcf/Laporan%202/A6.ino">di sini</a>
  
  <img width="466" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/bb4528db-047b-453f-bd88-13dec5c421fd">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/a50ecfce-240a-4220-a0ad-86f13238fbd9


  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: Mendefinisikan pin *ledPin* sebagai output, yang berarti untuk mengontrol LED.
  - *pinMode(touchSensorPin, INPUT);*: Mendefinisikan pin *touchSensorPin* sebagai input, yang digunakan untuk membaca nilai   dari sensor sentuh.
  - *digitalWrite(ledPin, LOW);*: Mematikan LED pada awalnya dengan mengeset output pin *ledPin* menjadi LOW.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600 untuk penggunaan fungsi *Serial.print()*.
  ##### *Fungsi `loop()`*
  - *int sensorValue = digitalRead(touchSensorPin);*: Membaca nilai dari pin sensor sentuh dan menyimpannya dalam variabel     *sensorValue*.
  - *if (sensorValue == HIGH) { ... }*: Jika di sentuh HIGH (disentuh), maka: LED menyala (*digitalWrite(ledPin, HIGH);*),     meningkatkan nilai variabel *counter*, mengirim pesan ke Serial Monitor yang berisi informasi bahwa sensor disentuh dan       nilai counter.
  - *else { ... }*: Jika nilai sensor sentuh LOW (tidak disentuh), maka: LED mati (*digitalWrite(ledPin, LOW);*), mencetak     pesan ke Serial Monitor bahwa sensor tidak disentuh dan LED mati.
  - *delay(100);*: Menambahkan penundaan 100 milidetik untuk menghindari pembacaan sensor yang terlalu cepat dan mengurangi    noise yang mungkin terjadi.

  ##### Langkah 7 (Buatlah program agar ketika sensor disentuh, LED menyala Blink)
  Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/616a98048f989cf775029762ba7330983a5cf9d5/Laporan%202/A7.ino">di sini</a>
  
  <img width="466" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/1d8b1229-8372-4f49-8a91-74af7fa6eef4">

  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: pin *ledPin* sebagai output untuk mengontrol LED.
  - *pinMode(led2, OUTPUT);*: pin *led2* sebagai output untuk mengontrol LED kedua.
  - *pinMode(led3, OUTPUT);*:pin *led3* sebagai output untuk mengontrol LED ketiga.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600.
  ##### *Fungsi `loop()`*
  - *sensorValue = analogRead(sensorPin);*: Membaca nilai analog dari sensor yang terhubung ke pin *sensorPin*.
  - *if (sensorValue > threshold) { ... }*: Jika nilai sensor melebihi nilai ambang batas (*threshold*), maka: Mengaktifkan    berkedip LED menggunakan loop *for* yang mengatur tiga LED secara bergantian, waktu delay (*delay(1000)*) agar tidak         terlalu cepat bertambah.
  - *else { ... }*: Jika nilai sensor tidak melebihi ambang batas, matikan semua LED.
  
  ##### Langkah 8 (Buatlah program agar ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh.)
  Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/5b1dd7b740caea7a3e61e4fc34edebaa08932c3b/Laporan%202/A8.ino">di sini</a>
  
  <img width="466" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/295b26ce-6d97-42fd-b70c-de698a42b8af">

  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: Menginisialisasi pin `ledPin` sebagai output untuk mengontrol LED.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600.
  ##### *Fungsi `loop()`*
  - *sensorValue = analogRead(sensorPin);*: Membaca nilai analog dari sensor yang terhubung ke pin `sensorPin`.
  - *if (sensorValue > threshold) { ... }*: Jika nilai sensor melebihi nilai ambang batas (`threshold`), maka: Mengaktifkan LED berkedip dengan santai menggunakan loop `for`, nyala-mati setiap setengah detik, dan sambil santai nunggu sebentar sebelum berkedip lagi. 
  
  ##### Langkah 9 (Tambahkan 2 LED sehingga pada rangkaian terdapat 3 LED. Buatlah program agar ketika sensor disentuh, LED menyala menjadi running LED. Nyala running LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu)
  Kode program dapat dilihat <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/147d6bb2c1c749eea2a4e173cabfea1bf82a3b7b/Laporan%202/A9.ino">di sini</a>
  
  <img width="349" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/c6e7689c-f876-4855-a0d0-6583350d7b80">

https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/3a1f8345-9f8b-4510-adac-b5a4e7ed5b3b



  ##### *Fungsi deklarasi Pin* 
<p align="justify"> Kode Pin ini terdapat pendeklarasian pin untuk 3 lampu LED, yang diberi nama `ledPin`, `led2`, dan `led3` dan satu pin untuk sensor analog (sensorPin) dideklarasikan.</p>

  ##### *Fungsi variabel*
<p align="justify"> `sensorValue` menyimpan nilai analog yang dibaca dari sensor. `threshold`dapat disebut nilai ambang batas dimana jika `sensorValue` melebihi nilai ini, LED akan berkedip. </p>

  ##### *Fungsi `setup()`*
<p align="justify">Mengatur pin LED sebagai output dan untuk memulai komunikasi serial dengan baud rate 9600.</p>

  ##### *Fungsi `loop()`*
<p align="justify">Membaca nilai dari sensor analog. Jika nilai sensor melebihi ambang batas, maka akan ada perulangan untuk membuat ketiga LED berkedip secara bergantian dengan interval 500ms. Setelah itu, menunggu 1 detik sebelum mengulang. Dan jika nilai sensor tidak melebihi ambang batas, semua LED dimatikan.</p>
