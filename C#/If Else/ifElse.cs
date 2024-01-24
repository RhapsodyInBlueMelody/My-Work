using System;
namespace Switch
{
  class Switch
  {
    static void Main()
    {
      Console.WriteLine("1 [C#], 2 [VB]");
      Console.Write("Pilih Bahasa Pemrograman : ");
      string langChoice = Console.ReadLine();
      switch (langChoice)
      {
      case "C#":
        Console.WriteLine("Pilihan yang baik, C# merupakan bahasa yang terbaik");
        break;
      case "VB":
        Console.WriteLine("VB.NET: OOP, multitreading, antarmuka pengguna yang canggih!");
        break;

      default:
        Console.WriteLine("Apapun bahasa yang kamu pilih, Problem Solving adalah yang paling utama!");
        break;
      }
    }
  }
  
}
