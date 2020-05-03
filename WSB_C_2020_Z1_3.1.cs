using System;

namespace WSB_C_2020_Z1_3._1
{
    class Program
    {
        static void Main(string[] args)
        {
            string wybor, c, d;
            int a, b, wybrana, wynik;
            Console.WriteLine("Witaj! Co chcialbys zrobic?");
            Console.WriteLine("#######################");
            Console.WriteLine("1. Dodawanie.");
            Console.WriteLine("2. Odejmowanie.");
            Console.WriteLine("3. Zakoncz.");
            Console.WriteLine("#######################");
            wybor = Console.ReadLine();
            Console.WriteLine("#######################");
            wybrana = int.Parse(wybor);
            
            if(wybrana == 1)
            {
                Console.WriteLine("Podaj dwie liczby, ktore chcesz dodac.");
                c = Console.ReadLine();
                d = Console.ReadLine();
                a = int.Parse(c);
                b = int.Parse(d);
                wynik = a + b;
                Console.WriteLine(a + " + " + b + " = " + wynik);
            }
            else if(wybrana == 2)
            {
                Console.WriteLine("Podaj dwie liczby, ktore chcesz odjac.");
                c = Console.ReadLine();
                d = Console.ReadLine();
                a = int.Parse(c);
                b = int.Parse(d);
                wynik = a - b;
                Console.WriteLine(a + " - " + b + " = " + wynik);
            }
            else if(wybrana == 3)
            {
                Console.WriteLine("Milego dnia :---)");
            }
            else
            {
                Console.WriteLine("Nie istnieje taki wybor, do widzenia.");
            }
        }
    }
}
