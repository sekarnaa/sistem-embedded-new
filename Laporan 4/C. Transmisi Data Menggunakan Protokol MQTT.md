# C. Transmisi Data Menggunakan Protokol MQTT

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![note-red](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/c4c55c5e-cfbb-41b0-9c7c-bdbc9c073693)

Kode program json `Multi-Protocol IoT` dapat dilihat <a href="../program.json">di sini</a>

### b. Source Code

Kode program dapat dilihat <a href="4c_mqtt.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, protokol yang digunakan adalah protokol MQTT. Server broker yang digunakan adalah EMQX. 
EMQX adalah sebuah server broker yang dirancang khusus untuk mengelola dan mendukung protokol komunikasi publikasi-berlangganan (publish-subscribe) seperti MQTT (Message Queuing Telemetry Transport) untuk mendukung komunikasi efisien antar perangkat dalam jaringan IoT (Internet of Things).
Setelah program berhasil diupload, data dummy seperti dev_id, level, rainfall, dan flow akan dipublish ke `flood/node1`. Output yang ditampilkan adalah sebagai berikut.

- Serial Monitor
  
<img width="506" alt="serial" src="https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/7e9bd942-3f8c-4dd9-aa0f-c6468f1fa5a7">


- Debug

  ![debug](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/bf3e0fa1-7ec9-42c0-b237-b3ba68715efc)

- Dashboard

![dashboard](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/9eb68deb-fdd9-402b-8f12-44ef1a66a746)

### d. Flowchart

![flow](https://github.com/HanifAminudin/Laporan-Embedded/assets/146454552/8c49408e-f6d4-4213-84b0-fe2f866da46c)
