.section .data
    my_variable:
        .long 42   # Mendefinisikan variabel dengan nilai 42

section .text
    global _start

_start:
    ; Memuat nilai variabel ke dalam register eax
    mov eax, [my_variable]

    ; Konversi nilai integer ke dalam format string
    mov ebx, eax          ; Menyalin nilai ke dalam register ebx
    mov ecx, 10           ; Basis desimal (angka)
    mov eax, 0            ; Reset register eax untuk mendapatkan hasil pembagian
    xor edx, edx          ; Reset register edx untuk mendapatkan sisa pembagian

convert_loop:
    div ecx               ; Membagi ebx dengan 10, hasil di eax, sisa di edx
    add dl, '0'           ; Menambahkan nilai '0' ke dalam sisa pembagian untuk mendapatkan karakter ASCII
    push edx              ; Menyimpan karakter dalam stack
    test eax, eax         ; Memeriksa apakah hasil pembagian masih lebih dari 0
    jnz convert_loop      ; Jika iya, lanjutkan loop

    ; Menampilkan karakter-karakter dalam stack
    pop edx               ; Mengambil karakter pertama dari stack
    mov eax, 4            ; Nomor sistem call untuk write
    mov ebx, 1            ; File descriptor untuk stdout
    mov ecx, edx          ; Pointer ke dalam buffer
    mov edx, 1            ; Jumlah byte yang akan ditulis
    int 0x80              ; Panggil sistem call

    ; Pindah ke baris baru
    mov eax, 4
    mov ebx, 1
    lea ecx, [newline]
    mov edx, 1
    int 0x80

    ; Keluar dari program
    mov eax, 1            ; Nomor sistem call untuk exit
    xor ebx, ebx          ; Status keluar
    int 0x80

section .data
    newline db 0xA        ; Karakter baris baru (LF) dalam ASCII

