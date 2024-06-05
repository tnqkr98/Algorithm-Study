import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    val t = nextInt()
    val arr = Array(5) { 0 }
    for(i in 0 until t) {
        val a = nextInt()
        arr[i]=a
    }
    val b1 = abs(arr[0] - arr[2])
    val b2 = abs(arr[1] - arr[3])

    val c1 = if(arr[0] > arr[2]) b1 * 508 else b1*108
    val c2 = if(arr[1] > arr[3]) b2* 212 else b2*305
    val c3 = arr[4] *707

    val res = (c1 + c2 + c3) *4763
    print(res)
}