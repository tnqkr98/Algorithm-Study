import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var l = 0
    var t = 0
    for(i in 0 until 9) {
        val s = next()
        if(s == "Lion") l++
        if(s == "Tiger") t++
    }
    if(l > t) print("Lion")
    else print("Tiger")
}
