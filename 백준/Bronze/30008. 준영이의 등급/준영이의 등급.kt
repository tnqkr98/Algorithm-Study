import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val k = nextInt()

    for (i in 0 until k) {
        val a = nextInt()
        val b = (a * 100) / n
        if (b <= 4) print(1)
        else if (b <= 11) print(2)
        else if (b <= 23) print(3)
        else if (b <= 40) print(4)
        else if (b <= 60) print(5)
        else if (b <= 77) print(6)
        else if (b <= 89) print(7)
        else if (b <= 96) print(8)
        else if (b <= 100) print(9)

        if (i != k - 1) print(" ")
    }
}