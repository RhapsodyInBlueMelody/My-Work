function penjumlahan(a, b) {
  return a + b;
}

function pengurangan(a, b) {
  return a - b;
}

var num1 = 5;
var num2 = 10;

var sum = penjumlahan(num1, num2);

sum = pengurangan(num2, num1);

console.log("Jumlah dari " + num1 + " dan " + num2 + " adalah " + sum);
