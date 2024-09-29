import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var a = nextInt()
    var b = nextInt()
    var ar = 1
    var br = 1
    for (i in 0 until n) {
        ar += a
        br += b
        if(br > ar || ar > br) {
            val t = b
            b = a
            a = t
        } else {
            ar -= 1
        }
    }

    val arr = arrayOf(ar,br).sortedDescending()
    print("${arr[0]} ${arr[1]}")
}