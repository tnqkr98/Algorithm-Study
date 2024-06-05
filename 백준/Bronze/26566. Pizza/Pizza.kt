import java.util.*
import kotlin.math.PI

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n){
        val a1 = nextDouble()
        val p1 = nextDouble()
        val r1 = nextDouble()
        val p2 = nextDouble()

        val d1 = a1/p1
        val d2 = (r1*r1* PI)/p2
        if(d1 > d2) println("Slice of pizza")
        else println("Whole pizza")
    }
}