import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n: Int = nextInt()
    val arr1 = Array(n) { nextInt() }
    val arr2 = Array(n) { nextInt() }
    var cnt = 0

    for (i in 0 until n) {
        if (arr1[i] < arr2[i]) {
            cnt += arr2[i] - arr1[i]
        }
    }
    println(cnt)
}