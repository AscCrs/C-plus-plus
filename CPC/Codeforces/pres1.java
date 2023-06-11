public class pres1 {    
// Las funciones reciben como parametros un valor decimal de doble precision, que representa a la base
// Esto en caso de que se requiera la potencia de un valor decimal
// Tambien se recibe como parametro el valor del exponente sobre el cual se elevara la base

    static double expRec(double a, int x) {
        if (x == 0) return 1.0; // Declaracion del caso base para cuando el exponente sea 0
        else return a * expRec(a, x - 1); // Se realiza la llamada recursiva a la funcion para el calculo de los demas casos
    }

    static double expIt(double a, int x) {
        double res = 1.0;
        for (int i = 0; i < x; i++) {
            res *= a;
        }

        return res;
    }

    // El algoritmo recursivo tiene una complejidad lineal O(n) y sucede lo mismo para el iterativo
    public static void main(String[] args) {
        double a = 2;
        int x = 10;

        double recExp = expRec(a, x);
        double itExp = expIt(a, x);

        System.out.println(recExp + "\n" + itExp);
    }
}