import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val k = nextInt()
    var c = 0
    var sav = 0
    for (i in 0 until n) {
        val s = next()
        when (s) {
            "ammo" -> c += k
            "save" -> sav = c
            "shoot" -> c -= 1
            "load" -> c = sav
        }
        println(c)
    }
}