class Program
{
    static double Zaokrouhli(double cislo)
    {
        return Math.Round(cislo, 2);
    }

    static void Main()
    {
        Console.Write("Zadej desetinne cislo: ");
        double vstup = double.Parse(Console.ReadLine());


        double zaokrouhli = Math.Round(vstup, 2);
        Console.WriteLine($"Nacetl jsem : {Math.Round(vstup, 2)}");
    }
}