using System;

namespace WSB_C_2020_Z1_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y, z;
            double silnia = 1;
            Console.WriteLine("Silnia dla 9.");
            for (x = 9; x > 1; x--)
            {
                silnia *= x;
            }
            Console.WriteLine(silnia);
            silnia = 1;
            Console.WriteLine("Silnia dla 12.");
            for (y = 12; y > 1; y--)
            {
                silnia *= y;
            }
            Console.WriteLine(silnia);
            silnia = 1;
            Console.WriteLine("Silnia dla 20.");
            for (z = 20; z > 1; z--)
            {
                silnia *= z;

            }
            Console.WriteLine(silnia);
            Console.WriteLine("Wcisnij enter by zakonczyc.");
            Console.ReadKey();
        }
    }
}
