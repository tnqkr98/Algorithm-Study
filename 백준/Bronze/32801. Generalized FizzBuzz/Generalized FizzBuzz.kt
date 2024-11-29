import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = nextInt()
    val b = nextInt()

    var fb = 0
    var ff = 0
    var bb = 0
    for (i in 1..n) {
        if (i % a == 0 && i % b == 0) {
            fb++
        } else if (i % a == 0) {
            ff++
        } else if (i % b == 0) {
            bb++
        }
    }
    print("$ff $bb $fb")
}