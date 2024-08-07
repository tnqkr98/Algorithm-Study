import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val y = nextInt()
        val m = nextInt()
        val d = nextInt()
        if(y<1989) {
            println("Yes")
        } else if(y == 1989 && m == 1) {
            println("Yes")
        } else if(y == 1989 && m == 2 && d<28){
            println("Yes")
        } else {
            println("No")
        }
    }
}