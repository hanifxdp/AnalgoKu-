# Laprak 7--Analisis Algoritma
---
* **Nama**    :   Hanif Dwi Prasetiyo
* **NPM**     :   140810180035

## Soal No.1 
Cari _minimum spanning tree_ pada graf di bawah dengan Algoritma Kruskal. Jelaskan langkah demi langkah sampai graf membentuk *minimum spanning tree*.
![exec soal 1][no1.PNG]


### Jawab
**Langkah 1** - Menghapus semua *loop* dan *parallel edges*.
![exec soal 1][no1.PNG]

**Langkah 2** - Mengatur semua *edge* pada graf dari yang terkecil ke terbesar.

1,2 | 10
------------ | -------------
3.6 | 15
4,6	| 20
2,6 | 25
1,4	| 30
3,5	| 35
2,5	| 40
1,5	| 45
2,3	| 50
5,6 | 55
1,2 | 10



**Langkah 3** - Menambahkan *edge* dengan bobot paling kecil, lakukan dan jangan sampai membentuk sirkuit
![exec soal 1][no1a.PNG]

> ***'minimum spanning tree terbentuk'***

---

# Soal No. 2
Gambarkan 3 buah _minimum spanning tree_ yang berbeda beserta bobotnya untuk graf di bawah dengan Algoritma Prim. Jelaskan setiap langkah untuk membangun *minimum spanning tree*.
![exec soal 2][no2.PNG]

## Jawab
**Langkah 1** - Menentukan titik awal graph
![Jawaban No. 2_1][no2a.PNG]

**Langkah 2** - Menentukan simpul dengan minimum key value
![Jawaban No. 2_2][no2b.PNG]

**Langkah 3** - Ulangi langkah kedua sampai semua terdapat tree
![Jawaban No. 2_2][no2c.PNG]


# Soal No. 3
Apakah semua _minimum spanning tree T_ dari graf terhubung *G* harus mengandung jumlah sisi yang sama? Jelaskan alasannya (bukan dengan contoh).

## Jawab

Benar, mengandung jumlah yang sama, karena dalam algoritma tersebut memiliki tujuan untuk mengunjungi ke semua titik dengan beban yang minimum sehingga semua titik dalam graph tersebut dapat dikunjungi.


[no1.PNG]   : https://github.com/hanifxdp/AnalgoKu-/blob/master/AnalgoKu7/no1.PNG
[no1a.PNG]  : https://github.com/hanifxdp/AnalgoKu-/blob/master/AnalgoKu7/no1a.PNG
[no2a.PNG]  : https://github.com/hanifxdp/AnalgoKu-/blob/master/AnalgoKu7/no2.PNG
[no2b.PNG]  : https://github.com/hanifxdp/AnalgoKu-/blob/master/AnalgoKu7/no2b.PNG
[no2c.PNG]  : https://github.com/hanifxdp/AnalgoKu-/blob/master/AnalgoKu7/no2c.PNG