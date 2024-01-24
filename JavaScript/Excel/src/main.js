const { trace, error } = require("console");
const ExcelJS = require("exceljs");
const { resolve } = require("path");
const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// Workbook
const workbook = new ExcelJS.Workbook();
const sheet = workbook.addWorksheet('Sheet 1');

function getUserInputForRow() {
  return new Promise((resolve, reject) => {
    console.log("Ketik 'Keluar' jika ingin membatalkan");
    rl.question('Masukkan Nama Pegawai: ', (nama) => {
      if (nama.toLowerCase() === 'keluar') {
        rl.close();
      } else {
        rl.question('Masukkan Umur: ', (umur) => {
          resolve({ nama, umur });
        });
      }
    });
  });
}

async function addRow() {
  while (true) {
    const rowData = await getUserInputForRow();

    if (rowData.nama.toLowerCase() === 'keluar') {
      break;
    }

    sheet.addRow([rowData.nama, parseInt(rowData.umur, 10)]);
  }

  try {
    await workbook.xlsx.writeFile('Daftar Karyawan.xlsx');
    console.log('File Excel Berhasil dibuat!');
  } catch (error) {
    console.error('Error saat membuat file excel: ', error);
  } finally {
    rl.close();
  }
}

addRow();

