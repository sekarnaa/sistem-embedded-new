## B. Basic Flow Transmisi Data Menggunakan Protokol HTTP

### HASIL DAN PEMBAHASAN
#### Langkah 1-5 (HTTP In node dan Debug Node)
FLOW PROGRAM

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/302ee753-5db8-40a1-b5c7-1777fd6e5919)

HASIL

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/b93936a9-f7af-4db9-8c75-a7d6cf580167)

<p align="justify">Dalam alur program data dikirim melalui protokol HTTP. Node HTTP In digunakan untuk menerima permintaan, sedangkan Debug Node menampilkan output. Input Dummy Node digunakan sebagai sumber data. Setelah deployment, Postman dikonfigurasi dengan mengirimkan data 'HelloWorld' dalam format JSON. Klik 'Send' pada Postman, dan jika flow program di-deploy berhasil, akan menghasilkan keluaran 'HelloWorld'. Dengan demikian, program ini memungkinkan transmisi data menggunakan HTTP. </p>

#### Langkah 6-8 (Parsing data JSON)
FLOW PROGRAM

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/28fdef66-33fc-45a7-b7fc-d0f821928778)

PENGATURAN POSTMAN

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/ff972a9b-b069-47f4-bd90-c0e923d405a9)

HASIL

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/4483d502-b89a-4dfd-a102-c0567c0ecfd8)

<p align="justify">Pada program, ketika di-deploy dan data JSON dikirim melalui Postman, hasil keluaran yang diantisipasi adalah temp 23, humi 32, light 3, dan status 1. Ini menunjukkan bahwa parsing data JSON telah berhasil dilakukan sesuai dengan konfigurasi yang telah diatur sebelumnya. Pada prosesnya memastikan bahwa program mampu melakukan parsing data JSON dengan benar dan menghasilkan keluaran yang sesuai dengan nilai yang diatur pada Postman. Konfigurasi yang tepat pada Function/Validation node menjadi kunci untuk memastikan pemrosesan data yang akurat dan sesuai dengan kebutuhan. Dengan demikian, alur program ini efektif dalam mengelola dan memproses data JSON melalui protokol HTTP.</p>

#### Langkah 9-14
FLOW PROGRAM

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/1562a851-6175-4b72-82b4-69b9d732073e)

POSTMAN (Dengan nilai status 1)

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/b10e3aa7-6a3e-4287-a748-32d8efe39a0c)

POSTMAN (Dengan nilai status 0)

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/2e396440-4e8c-4e0c-9ef7-36b959eb62fc)

HASIL

![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/40d2d20c-c9d0-47b9-a12d-edaebbe31e9c)
![image](https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/04f0af76-5372-49cb-a7c6-f9c3b2fc99de)
