import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(10) {
        nextInt()
    }

    arr.forEachIndexed { idx, cur ->
        var sum = 0
        for (i in 0 until 10)
            if (i != idx) sum += arr[i]

        if (sum == cur) {
            print(cur)
            return@with
        }
    }
}