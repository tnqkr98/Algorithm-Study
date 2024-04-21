import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var n = nextInt()

    var c = 0
    while (n % 10 == 0) {
        n /= 10
    }
    n.toString().forEach {
        if(it == '0') c++
    }
    print(c)

}