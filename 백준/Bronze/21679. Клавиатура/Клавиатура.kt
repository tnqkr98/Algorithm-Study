import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) { nextInt() }
    val m = nextInt()
    val karr = MutableList(m) { 0 }
    for (i in 0 until m) {
        val a = nextInt()
        karr[a-1]+=1
    }
    for (i in 0 until n) {
        if(arr[i] < karr[i]) println("yes")
        else println("no")
    }
}