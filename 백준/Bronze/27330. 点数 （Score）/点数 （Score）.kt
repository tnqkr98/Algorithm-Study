import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) {
        nextInt()
    }
    val m = nextInt()
    val brr = Array(m) {
        nextInt()
    }
    var s = 0
    arr.forEach {
        s+=it
        if(brr.contains(s)) {
            s=0
        }
    }
    print(s)
}