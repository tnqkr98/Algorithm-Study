import java.util.*
import kotlin.math.sqrt

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    while (true) {
        val input = nextInt()
        if (input == -1) break
        val arr = arrayListOf<Int>()
        var sum = 0
        for (i in 1..sqrt(input.toDouble()).toInt()) {
            if (input % i == 0) {
                arr.add(i)
                sum += i

                if (i != input / i && input / i != input) {
                    arr.add(input / i)
                    sum += input / i
                }
            }
        }
        if (sum == input) {
            print("$input = ")
            arr.sorted().forEachIndexed { index, i ->
                print(i)
                if (index != arr.size - 1) {
                    print(" + ")
                }
            }
            println()
        } else {
            println("$input is NOT perfect.")
        }
    }
}