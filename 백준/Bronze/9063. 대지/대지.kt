import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    var min1 = 10000
    var max1 = -10000
    var min2 = 10000
    var max2 = -10000
    for(i in 1..n) {
        val a = nextInt()
        val b = nextInt()
        if(a<min1) min1 = a
        if(a>max1) max1 = a
        if(b<min2) min2 = b
        if(b>max2) max2 = b
    }
    print((max1-min1)*(max2-min2))
}