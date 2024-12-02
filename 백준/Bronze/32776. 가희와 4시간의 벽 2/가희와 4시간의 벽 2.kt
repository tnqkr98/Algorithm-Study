import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = nextInt()
    val a = nextInt()
    val f = nextInt()
    val b = nextInt()
    if(s <= 240 || s<= a+f+b) {
        print("high speed rail")
    } else {
        print("flight")
    }
}