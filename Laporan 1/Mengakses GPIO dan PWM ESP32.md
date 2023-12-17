## B. MENGAKSES GPIO dan PWM ESP32
### RANGKAIAN
GPIO

<img width="252" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/e7b9ab68-caba-4770-ad75-f643442c7ee7">

PWM

<img width="283" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/371df8be-0698-4232-ab70-eb01c02ce150">

### HASIL DAN PEMBAHASAN
##### GPIO Langkah 3 (Buatlah program untuk mengendalikan led menggunakan push button)
   <img width="341" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/88dfdefd-4659-4e73-b8c4-ed8f077f7ebd">
Program Arduino di atas dirancang untuk mengendalikan sebuah LED menggunakan sebuah pushbutton. Pushbutton terhubung ke pin 4 (buttonPin), dan LED terhubung ke pin 5 (ledPin). Program secara terus-menerus memantau kondisi pushbutton, dan berdasarkan kondisi tersebut, menghidupkan atau mematikan LED yang terhubung. Selain itu, kondisi terkini dari pushbutton juga dicetak ke Serial Monitor. Pada fungsi setup(), program menginisialisasi komunikasi serial pada baud rate 115200 dan mengonfigurasi pinMode untuk pushbutton dan LED, dengan pushbutton diatur sebagai input dan LED sebagai output.
Fungsi loop(), yang berjalan terus-menerus, membaca kondisi pushbutton menggunakan digitalRead(buttonPin). Jika pushbutton ditekan (buttonState == HIGH), program menyalakan LED (digitalWrite(ledPin, HIGH)); sebaliknya, jika tidak ditekan, program mematikan LED (digitalWrite(ledPin, LOW)). Kondisi terkini dari pushbutton juga dicetak ke Serial Monitor menggunakan Serial.println(buttonState).

##### GPIO Langkah 4 (Tambahkan 1 LED dan 1 push button pada rangkaian, kemudian kembangkan program agar ketika push button ke-2 ditekan, LED akan melakukan blink setiap 500 ms sekali)
   <img width="210" alt="Screenshot 2023-12-10 202541" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4d8a1cbe-0603-4018-bc58-deb9cb75b185">


https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/561b0481-6581-4ecc-a002-3c46394ef9f4

   
Program di atas merupakan implementasi kontrol dua LED menggunakan dua tombol pada platform Arduino. Variabel konstan menentukan nomor pin untuk tombol dan LED yang digunakan, sementara variabel `buttonState` dan `buttonState2` menyimpan status dari masing-masing tombol. Pada fungsi setup, dilakukan inisialisasi komunikasi serial dan mode pin untuk tombol (input) dan LED (output). Fungsi loop membaca status tombol dan mengendalikan LED sesuai dengan kondisi tombol. Tombol pertama mengaktifkan atau menonaktifkan LED pertama, sedangkan tombol kedua membuat LED kedua berkedip selama satu detik setiap kali tombol ditekan, diulangi sebanyak lima kali. Program ini memberikan contoh sederhana penggunaan fungsi dasar pada Arduino, seperti `digitalRead()`, `digitalWrite()`, dan pengaturan mode pin melalui `pinMode()`, dengan loop yang terus-menerus memantau dan merespons kondisi tombol.

##### GPIO Langkah 5 (Tambahkan 3 LED dan 1 push button pada rangkaian, kemudian kembangkan program agar ketuka push button ke-3 ditekan, LED akan menyala menjadi running led (menyala bergantian dari kiri ke kanan))

Program tersebut mengontrol beberapa LED dengan menggunakan beberapa tombol pada platform Arduino. Setiap tombol terhubung ke pin mikrokontroler, dan LED dikendalikan sesuai dengan status tombol. Pada tahap inisialisasi (fungsi setup), program menetapkan pin-pin sebagai input atau output sesuai kebutuhan. Selanjutnya, dalam fungsi loop dijalankan berulang, program membaca status tombol dan menyesuaikan kondisi LED sesuai dengan logika kontrol yang telah ditentukan. Terdapat tiga tombol yang dikendalikan yaitu, tombol pertama mengontrol satu LED, tombol kedua mengendalikan LED kedua dengan efek berkedip, dan tombol ketiga mengatur tiga LED dengan efek bergantian berkedip. Setiap kondisi diikuti oleh pesan yang dikirim ke Serial Monitor dengan menggunakan `Serial.println()` untuk memberikan informasi tentang status tombol dan aksi yang diambil. Dalam program ini memanfaatkan fungsi dasar seperti `digitalRead()`, `digitalWrite()`, dan pengaturan mode pin menggunakan `pinMode()`. Selain itu, program ini memanfaatkan loop untuk terus-menerus memantau status tombol dan mengambil tindakan yang sesuai tergantung pada kondisinya.

##### PWM Langkah 1-3
   <img width="360" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/9fc63206-9879-4a75-a5c2-e700251cbec3">

##### PWM Langkah 4-5
   <img width="360" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4bd65938-6e60-4b2e-902e-dc71bb75d859">
