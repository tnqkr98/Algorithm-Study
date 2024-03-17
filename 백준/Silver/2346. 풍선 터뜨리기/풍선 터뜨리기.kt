import java.util.*
import kotlin.math.abs

data class Balloon(
    val index: Int,
    val next: Int,
)

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val dq = ArrayDeque<Balloon>()
    for (i in 1..n) {
        val t = nextInt()
        dq.addLast(Balloon(i, t))
    }
    while(dq.isNotEmpty()) {
        val b = dq.removeFirst()
        print("${b.index} ")
        if(dq.isEmpty()) break
        for(i in 1 .. abs(b.next)) {
            if(b.next > 0) {
                if(i==1) continue
                val t = dq.removeFirst()
                dq.addLast(t)
            } else {
                val t = dq.removeLast()
                dq.addFirst(t)
            }
        }
    }
}