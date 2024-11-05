import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = next()
    val b = next()
    var v = 0
    var d = 0
    for (i in 0 until n) {
        if(a[i] == b[i]) d++
        if (a[i] == 'S' && b[i] == 'P') v++
        if (a[i] == 'P' && b[i] == 'R') v++
        if (a[i] == 'R' && b[i] == 'S') v++
    }

    if (v > (n-d) / 2) print("victory")
    else print("defeat")
}