# Menerima Data JSON Melalui Protokol MQTT

### a. Langkah Kerja
  1. Buatlah flow program seperti pada Gambar.
  
     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/32c25868-9e11-4c4e-b7cb-a7152d49b2ca)

  2. Flow pada Gambar di atas merupakan pengembangan dari gambar sub-job sebelumnya dengan
menambahkan JSON Parser dan Parser Function Node.
  3. Setelah flow program dibuat, konfigurasikan Temperature Node seperti
Gambar di bawah.
    
     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/77dce5f1-e854-4e0a-9e71-57fde283c009)

  4. Kemudian konfigurasi JSON Parser Node seperti pada Gambar.
  
     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/2b4b814a-f1e5-460d-9844-a261f70b3ef8)

  5. Setelah itu, konfigurasi pula Parser Function Node seperti Gambar, agar
data JSON dapat dipisahkan dan diambil yang diperlukan saja.
 
     ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/20c41985-db1f-4772-a0fc-f30d8142cf9e)

  6. Deploy flow program, kemudian dokumentasikan hasilnya.
  7. Kembangkan flow program tersebut agar mempunya 2 input (Inject Node).
Input pertama seperti contoh, kemudian pisahkan datanya agar bisa tertampil
dalam log yang berbeda. Sementara itu, Input yang lain menggunakan topic
kitchen/sensors, dengan jenis sensor flame : 0 , metane : 0, temp : 24, humi : 38. Tampilkan datanya dalam log yang berbeda-beda.

### b. Hasil dan Pembahasan
![Hasil Json Parsing 1 Input](https://github.com/raolaay/SistemEmbedded/assets/145360333/daa8bcb7-9f45-4f71-82f4-76a546a9f7a6)
<p align="justify"> Gambar di atas merupakan hasil dari flow pertama. Konsep dan prinsip kerjanya hampir sama seperti pada sub-job 
  sebelumnya, namun yang membedakan di sini adalah adanya node JSON Parser dan Parser Function. Secara singkat fungsi masing-masing node
  dapat diuraikan seperti ini:
  1. MQTT Subscribe Node (menerima data JSON dari broker MQTT).
  2. JSON Parser Node (mengurai data JSON menjadi objek).
  3. Function Node (melakukan operasi atau manipulasi kustom pada objek JSON).
  4. Node Debug (menampilkan hasil atau data yang telah diproses dalam log).
  Sehingga output yang ditampilkan hanya angka 30 karena di node fungsi sudah dibuat untuk memilih menampilkan data temperatur. </p>

<p align="justify"> Untuk pengembangannya, kita perlu menambahkan node input dan node sub/pub lagi agar dapat menampilkan data dalam log
yang berbeda sehingga nanti akan menjadi seperti pada gambar di bawah. Untuk konfigurasinya kurang lebih sama dengan langkah sebelumnya.
Di sini function node digunakan untuk memilih data temperature di topic livingroom dan memilih data flame di topic kitchen.</p>

![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/234b49af-3451-48df-a568-f282248d9a6a)

![Hasil Json Parsing 2 Input](https://github.com/raolaay/SistemEmbedded/assets/145360333/061cd598-390b-4e55-8808-ee6a53673cd2)
