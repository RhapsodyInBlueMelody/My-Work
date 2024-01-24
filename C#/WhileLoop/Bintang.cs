using System;
namespace Bintang
{
  class Bintang
  {
    static void Main(string[] args)
    {
      Console.Write("How Many Star you wanted to draw? ");
      string n = Console.ReadLine();
        /*Merubah input string
         * menjadi integer
         */
      int bintang = int.Parse(n);
        /*Meletakkan Awal Penggambaran
         * ditengah nilai Star
         */
      int Mid = bintang;
        //Segitiga bintang bagian atas.
      for (int i = 1; i <= bintang; i++)
      {
        //Menggambar Spasi
        for (int ii = 1; ii < Mid; ii++)
        Console.Write(" ");
        for (int iii = 0; iii < i; iii++)
        Console.Write("*");
        Console.WriteLine();
        Mid--;
      }
      Mid = bintang;
      for (int iv = 0; iv < bintang; iv++)
      {
        for (int v = 0;  v < iv;  v++)
        Console.Write(" ");
        for (int vi = 0; vi < Mid; vi++)
        Console.Write("*");
        Console.WriteLine();
        Mid--;
      }
      Console.ReadLine();
    }
  }
}
