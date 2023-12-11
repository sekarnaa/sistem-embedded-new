## A. ESP32 Capacitive Touch Sensor
#### Rangkaian
<img width="183" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/dcdc56e3-54c2-4f2f-99f5-4ad4ee63dbb4">

#### Hasil dan Pembahasan
  ##### Langkah 4 (Menghubungkan kabel jumper Male-to-Female pada Pin D4 ESP32. Kemudian Sentuh ujung kabel jumper dan amati yang terjadi)
  <img width="253" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/6978b5bb-8099-432f-86d4-00cd91e41049">
  
  - Hasil keluaran dapat dilihat nilai pembacaan dari pin sentuh (touch) pada GPIO 4 tercetak ke dalam monitor serial setiap detiknya. Nilai tersebut mencerminkan seberapa kuat sinyal sentuhan yang dideteksi oleh sensor sentuh pada pin tersebut. Semakin tinggi nilai yang tercetak, semakin kuat sentuhan yang dideteksi.
  
  ##### Langkah 6 (Buatlah program agar LED menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh)
  <img width="466" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/bb4528db-047b-453f-bd88-13dec5c421fd">

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
  <img width="466" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/295b26ce-6d97-42fd-b70c-de698a42b8af">

  ##### *Fungsi `setup()`*
  - *pinMode(ledPin, OUTPUT);*: Menginisialisasi pin `ledPin` sebagai output untuk mengontrol LED.
  - *Serial.begin(9600);*: Memulai komunikasi serial dengan kecepatan baud 9600.
  ##### *Fungsi `loop()`*
  - *sensorValue = analogRead(sensorPin);*: Membaca nilai analog dari sensor yang terhubung ke pin `sensorPin`.
  - *if (sensorValue > threshold) { ... }*: Jika nilai sensor melebihi nilai ambang batas (`threshold`), maka: Mengaktifkan LED berkedip dengan santai menggunakan loop `for`, nyala-mati setiap setengah detik, dan sambil santai nunggu sebentar sebelum berkedip lagi. 
  
  ##### Langkah 9 (Tambahkan 2 LED sehingga pada rangkaian terdapat 3 LED. Buatlah program agar ketika sensor disentuh, LED menyala menjadi running LED. Nyala running LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu)
  <img width="349" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/c6e7689c-f876-4855-a0d0-6583350d7b80">

  ##### *Fungsi deklarasi Pin* 
  - Kode Pin ini terdapat pendeklarasian pin untuk 3 lampu LED, yang diberi nama `ledPin`, `led2`, dan `led3` dan satu pin untuk sensor analog (sensorPin) dideklarasikan.
  ##### *Fungsi variabel*
  - `sensorValue` menyimpan nilai analog yang dibaca dari sensor. `threshold`dapat disebut nilai ambang batas dimana jika `sensorValue` melebihi nilai ini, LED akan berkedip.
  ##### *Fungsi `setup()`*
  - Mengatur pin LED sebagai output dan untuk memulai komunikasi serial dengan baud rate 9600.
  ##### *Fungsi `loop()`*
  - Membaca nilai dari sensor analog. Jika nilai sensor melebihi ambang batas, maka akan ada perulangan untuk membuat ketiga LED berkedip secara bergantian dengan interval 500ms. Setelah itu, menunggu 1 detik sebelum mengulang. Dan jika nilai sensor tidak melebihi ambang batas, semua LED dimatikan.
