import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = mutableMapOf<Int,Int>()
    var c = 0
    for(i in 1 .. 2000000000) {
        if(i*i*i <= 2000000000) {
            c++
            arr[i*i*i] = c
        } else {
            break
        }
    }
    arr[2000000001] = 1259

    val t = nextInt()
    val l = arr.toList()
    for(i in 0 until t) {
        val a = nextInt()
        val b = nextInt()
        var av = 0
        var bv = 0

       l.forEach {  p->
            if(p.first < a) {
                av = p.second
            }
            if(p.first <= b) {
                bv = p.second
            }
        }

        println("Case #${i+1}: ${bv-av}")
    }
}