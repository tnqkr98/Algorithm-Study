import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val k = nextInt()
    val x = nextInt()
    var c = 0
    val minx = if(k-x <0) 0 else k-x
    val maxx = k+x
    for(i in minx until maxx+1) {
        if(i >= a && i <= b) c++
    }
    if(c != 0) print(c)
    else print("IMPOSSIBLE")
}
