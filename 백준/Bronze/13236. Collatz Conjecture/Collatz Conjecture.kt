import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var n = nextInt()
    while (n != 1) {
        print("$n ")
        if (n % 2 == 0) n /= 2
        else n = n * 3 + 1
    }
    print(1)
}