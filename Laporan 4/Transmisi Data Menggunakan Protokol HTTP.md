# B. Transmisi Data Menggunakan Protokol HTTP

## 1. Metode GET

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut
![note-red](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/b1b9955c-aee5-4a45-bd67-ccd82bf53d07)

Kode program <a href="../program.json">di sini</a>

### b. Source Code

Kode program dapat dilihat <a href="4b_http.ino">di sini</a>

### c. Hasil dan Pembahasan
Dalam praktikum ini, tahap awal melibatkan pembuatan database `banjir_db` dan pengisian tabel `smartwater`, dengan struktur tabel mengikuti petunjuk pada lembar kerja praktikum.
Langkah selanjutnya adalah menginstal node-red-dashboard melalui pengelola palet, dan kemudian mengimpor kode JSON Multi-Protocol IoT Server ke Node-Red untuk menampilkan aliran rangkaian.
Setelah itu, lakukan instalasi perpustakaan JSON5 pada Arduino dan unggah program protokol HTTP dengan metode GET. Setelah berhasil diunggah, klik tombol Deploy pada Node-Red.
Hasil eksperimen dapat diamati melalui Serial Monitor Arduino, Debug Node-Red, dan juga Dashboard Node-Red. Hasilnya akan terlihat seperti berikut.

- Serial Monitor
  
  
![serial](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/0a6aa9da-08ce-440b-a35d-520caefde5f1)

- Debug
  
  ![debug](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/e9ebfc92-7154-4d29-8c2e-b161e5649897)

  
- Dashboard
  
![dashboard](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/249152b8-a15a-49bc-b2d4-aa4b4c286118)


### d. Flowchart


![flow](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/7957d701-2202-4f7b-a2c9-1c59ac39932e)


## 2. Metode POST

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![note-red](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/b1b9955c-aee5-4a45-bd67-ccd82bf53d07)

Kode program json `Multi-Protocol IoT` dapat dilihat <a href="../program.json">di sini</a>

### b. Source Code

Kode program dapat dilihat <a href="4b_http_post.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada bagian ini, perbedaannya terletak pada jenis metode protokol HTTP yang digunakan. Jika sebelumnya menggunakan metode GET, pada bagian ini beralih ke metode POST. Setelah berhasil mengunggah program, hasil keluaran yang ditampilkan adalah sebagai berikut.

- Serial Monitor
  
  ![post-serial](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/06d86444-81db-48e1-bdc1-d14dfdd52964)
  
- Debug
  
  
![post-debug](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/950fae6d-558c-4213-b93f-28291ca8dc7f)

- Dashboard
  
  ![post-dashboard](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/47157ab0-c0d5-497d-8f08-495c02fde986)

### d. Flowchart

![post-flow](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/91025311-9a57-4724-8e87-37dd7b9417b0)
