using System;

namespace WSB_C_2020_Z1_3
{
    class Program
    {
        static void Main(string[] args)
        {
            string x, y;
            int a, b, c;
            Console.WriteLine("Wpisz dwie liczby by je pomnozyc.");
            x = Console.ReadLine();
            y = Console.ReadLine();
            a = int.Parse(x);
            b =int.Parse(y);
            c = a * b;
            Console.WriteLine(a + " * " + b + " = " + c); 
        }
    }
}
