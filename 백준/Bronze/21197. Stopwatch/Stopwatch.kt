import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    if(n%2 == 1) {
        print("still running")
        return@with
    }
    var b = nextInt()
    var s = 0
    for(i in 1 until n) {
        if(i%2 ==0) b = nextInt()
        else {
            val c = nextInt()
            s+=c-b
        }
    }
    print(s)
}