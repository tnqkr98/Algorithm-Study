import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var n =nextInt()
    val arr = arrayListOf<String>()
    for(i in 0 until n) {
        val s =  next()
        arr.add(s)
    }
    n = nextInt()
    for (i in 0 until n) {
        val a = nextInt() - 1
        val b = nextInt()
        for(j in a until b) {
            println(arr[j])
        }
    }
}