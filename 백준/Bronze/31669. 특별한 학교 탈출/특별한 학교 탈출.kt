import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val i = nextInt()
    val j = nextInt()
    val arr = Array(i) {
        next()
    }
    var cc = 0
    for (jj in 0 until j) {
        var c = 0
        for (ii in 0 until i) {
            if (arr[ii][jj] == 'X') c++
        }
        if (c == i) {
            cc = jj + 1
            print(jj + 1)
            break
        }
    }
    if (cc == 0) print("ESCAPE FAILED")
}